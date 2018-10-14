#include "Physics_Tools.hpp"
#include "glm.hpp"

inline bool Tri_Ray_Hit_Check(glm::vec3 Ray_O, glm::vec3 Ray_Dir, glm::vec3 A, glm::vec3 B, glm::vec3 C) {

	double ep = 1e-16;
	glm::vec3 N = glm::cross(B-A,C-A);
	glm::normalize(N);
	glm::vec3 P;

	if (fabs(glm::dot(Ray_O - A, N)) < ep) {
		P = Ray_O;
	}
	else {

	}

}

void Stochastic_Find_Physics_Properties(glm::vec3 &COM, glm::mat3 &Inertia, int Phys_Mesh_Ind) {


}