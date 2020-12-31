#include "Light.h"



Light::Light()
{
	color = glm::vec3(1.0f, 1.0f, 1.0f); // amount of color
	ambientIntensity = 1.0f;
	direction = glm::vec3(0.0f, -1.0f, 0.0f);
	diffuseIntensity = 0.0f;
}
Light::Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat xDir, GLfloat yDir, GLfloat zDir, GLfloat dIntensity)
{
	color = glm::vec3(red, green, blue);
	ambientIntensity = aIntensity;
	direction = glm::vec3(xDir, yDir, zDir);
	diffuseIntensity = dIntensity;
}
void Light::UseLight(GLfloat ambientIntensityLocationID, GLfloat ambientColorLocationID, GLfloat diffuseIntensityLocationID, GLfloat directionLocationID)
{
	glUniform3f(ambientColorLocationID, color.x, color.y, color.z);
	glUniform1f(ambientIntensityLocationID, ambientIntensity);

	glUniform3f(directionLocationID, direction.x, direction.y, direction.z);
	glUniform1f(diffuseIntensityLocationID, diffuseIntensity);
}

Light::~Light()
{
}
