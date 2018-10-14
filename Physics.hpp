#ifndef Physics_H
#define Physics_H

#include "glm.hpp"
#include <vector>

class Physics_Object {
	int Physics_Type;
	int Phys_Mesh_Ind;
	glm::vec3 Pos;
	glm::vec3 Old_Pos;
	glm::vec3 Lin_Vel;
	glm::vec3 Ang_Vel;
	glm::vec3 COM;
	glm::mat3 Inertia;
};

class Physics_Mesh {
public:
	std::vector<glm::vec3> Verts;
	std::vector<glm::uvec3> Tris;

	Physics_Mesh() {}
	Physics_Mesh(std::vector<glm::vec3> Vertices, std::vector<glm::uvec3> Triangles) : Verts(Vertices), Tris(Triangles) {}
};

#endif



