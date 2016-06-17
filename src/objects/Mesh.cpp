#include "Mesh.h"
#include <vector>
#include "objload.h"
#include "../SOIL/SOIL.h"

Mesh::Mesh(std::string filename) : RenderObject()
{
	std::vector< float > vertices;
	std::vector< float > normals;
	std::vector< float > uvs;
	std::vector< unsigned int > facets;

	_readObj(filename, vertices, normals, uvs, facets);

	/*std::cout << "Vertices: " << vertices.size() << "; "
		<< "Normals: " << normals.size() << "; "
		<< "Facets: " << facets.size() << "; "
		<< std::endl;*/

	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	// Set texture filtering
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	// Load, create texture and generate mipmaps
	int width, height;
	unsigned char* image = SOIL_load_image("container.jpg", &width, &height, 0, SOIL_LOAD_RGB);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0); // Unbind texture when done, so we won't accidentily mess up our texture.

	_size = facets.size();

	glGenVertexArrays(1, &_vao);
	glBindVertexArray(_vao);

	std::vector< unsigned int > vbos;
	vbos.resize(4);
	glGenBuffers(4, vbos.data());

	glBindBuffer(GL_ARRAY_BUFFER, vbos[0]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float)* vertices.size(),
		vertices.data(), GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, vbos[1]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float)* normals.size(),
		normals.data(), GL_STATIC_DRAW);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(1);

	glBindBuffer(GL_ARRAY_BUFFER, vbos[2]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float)* uvs.size(),
		uvs.data(), GL_STATIC_DRAW);
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(2);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vbos[3]);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int)* _size,
		facets.data(), GL_STATIC_DRAW);
	glBindVertexArray(0);

	vertices.clear();
	normals.clear();
	uvs.clear();
	facets.clear();
}

void Mesh::_readObj(
	std::string& fileName_, 
	std::vector< float >& vertices_,
	std::vector< float >& normals_,
	std::vector< float >& uvs_,
	std::vector< unsigned int >& facets_)
{
	obj::Model m = obj::loadModelFromFile(fileName_.c_str());
	vertices_ = m.vertex;
	normals_ = m.normal;
	uvs_ = m.texCoord;

	for (unsigned i = 0; i < m.faces["default"].size(); i++) {
		facets_.push_back(m.faces["default"][i]);
	}
}