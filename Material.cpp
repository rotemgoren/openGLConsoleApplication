#include "Material.h"



Material::Material()
{
	shininess = 0.0f;
	specularIntensity = 0.0f;
}

Material::Material(GLfloat shine, GLfloat sIntensity)
{
	shininess = shine;
	specularIntensity = sIntensity;
}

void Material::UseMaterial(GLuint specularIntensityLocationID, GLuint shininessLocationID)
{
	glUniform1f(specularIntensityLocationID, specularIntensity);
	glUniform1f(shininessLocationID, shininess);

}

Material::~Material()
{
}
