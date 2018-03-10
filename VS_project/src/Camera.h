#pragma once

#include "glm.hpp"

namespace Core
{
	glm::mat4 createPerspectiveMatrix(float zNear = 0.1f, float zFar = 100.0f);

	// position - pozycja kamery
	// forward - wektor "do przodu" kamery (jednostkowy)
	// up - wektor "w gore" kamery (jednostkowy)
	// up i forward musza byc ortogonalne!
	glm::mat4 createViewMatrix(float roll, float pitch, float yaw);
}