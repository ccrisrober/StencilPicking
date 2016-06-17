#include "SimpleScene.h"

SimpleScene::SimpleScene(int w, int h) : IScene(w, h) { }
SimpleScene::~SimpleScene() {
}

void SimpleScene::initScene() {
	compileAndLinkShader();
	glClearColor(0.5f,0.5f,0.5f,1.0f);

	cube = new Mesh("../models/cube.obj");

	for(int i = 0; i < 20; i++) {
		float r = ((float)( std::rand() % 1000)) * 0.001;
		float g = ((float)( std::rand() % 1000)) * 0.001;
		float b = ((float)( std::rand() % 1000)) * 0.001;
		float a = ((float)( std::rand() % 1000)) * 0.001;
		if(a >= 0.85) {
			a = 0.4;
		}
		colors.push_back(glm::vec4(r, g, b, a));
	}

	glBindVertexArray(0);

	glEnable(GL_DEPTH_TEST);
	glDisable(GL_CULL_FACE);
}


void SimpleScene::update( float t ) {
	angle += 0.1 * t;
}

void SimpleScene::draw(Camera* camera) {
	if (pick) {
		glEnable(GL_STENCIL_TEST);
		glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE); 
		glClear(GL_STENCIL_BUFFER_BIT);
	}
	prog.use();

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	view = camera->GetViewMatrix();
	projection = camera->GetProjectionMatrix();

	// draw scene
	drawScene();

	prog.unuse();
	if (pick) {
		glDisable(GL_STENCIL_TEST);
	}
	pick = false;
}

void SimpleScene::updateMatrices() {
	glm::mat4 modelView = view * model;

	prog.send_uniform("normal", glm::mat3(glm::vec3(modelView[0]), glm::vec3(modelView[1]), glm::vec3(modelView[2])));
	prog.send_uniform("modelView", modelView);
	prog.send_uniform("modelViewProj", projection * modelView);
}

void SimpleScene::resize(int w, int h) {
	glViewport(0, 0, w, h);
	width = w;
	height = h;
}

void SimpleScene::compileAndLinkShader() {
	prog.load("../shader/shader.vert", GL_VERTEX_SHADER);
	prog.load("../shader/shader.frag", GL_FRAGMENT_SHADER);
	prog.compile_and_link();
	prog.add_uniform("normal");
	prog.add_uniform("modelView");
	prog.add_uniform("modelViewProj");
	prog.add_uniform("Kd");
	prog.add_uniform("selected");
}
#define NUM 3
void SimpleScene::drawScene() {
	int n = 0;
	float size = 0.025f;

	for (int i = -NUM; i < NUM; i++) {
		for (int j = -NUM; j < NUM; j++) {
			for (int k = -NUM; k < NUM; k++) {
				vec4 kd = colors[n++ % colors.size()];
				prog.send_uniform("Kd", kd);
				model = glm::translate(mat4(1.0f), vec3(i*2, j*2, k));
				model = glm::rotate(model, glm::radians(-angle), glm::vec3(0, 1, 0));
				model = glm::scale(model, glm::vec3(size));
				if (selected == n) {
					prog.send_uniform("selected", true);
				}
				else {
					prog.send_uniform("selected", false);
				}
				updateMatrices();
				if (pick) {
					glStencilFunc(GL_ALWAYS, n, -1);
				}
				cube->render();
			}
		}
	}
}
// https://en.wikibooks.org/wiki/OpenGL_Programming/Object_selection