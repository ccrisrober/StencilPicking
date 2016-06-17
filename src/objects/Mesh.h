#pragma once
#include "RenderObject.h"
#include <string>
#include <vector>
class Mesh : public RenderObject
{
public:
	Mesh(std::string filename);
	void _readObj(std::string& fileName_,
		std::vector< float >& vertices_,
		std::vector< float >& normals_,
		std::vector< float >& uvs_,
		std::vector< unsigned int >& facets_);
};

