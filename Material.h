#pragma once

#include <GL\glew.h>
class Material
{
	public:
		Material();
		Material(GLfloat shininess, GLfloat specularIntensity);
		void UseMaterial(GLuint specularIntensityLocationID, GLuint shininessLocationID);
		~Material();
	private:
		GLfloat specularIntensity;
		GLfloat shininess;

};

