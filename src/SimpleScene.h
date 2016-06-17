#ifndef _SIMPLE_SCENE_H
#define _SIMPLE_SCENE_H

#include "IScene.h"
#include "SimpleGLShader.h"
#include "objects/Cube.h"
#include "objects/MonkeyHead.h"
#include "objects/Mesh.h"

#include "glm/glm.hpp"
#include <vector>

class SimpleScene : public IScene {
private:
	SimpleGLShader prog;

	RenderObject *cube;

	glm::mat4 model;
	glm::mat4 view;
	glm::mat4 projection;

    void updateMatrices();
    void compileAndLinkShader();
    void drawScene();

	std::vector<glm::vec4> colors;

	float angle = 0.0f;

	bool pick = false;

public:
	SimpleScene(int w, int h);
	~SimpleScene();

	void Picking() {
		pick = true;
	}

    void initScene();
    void update( float t );
	void draw(Camera* camera);
    void resize(int, int);

	int selected = 0;

};

#endif // _SIMPLE_SCENE_H
