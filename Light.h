#pragma once
#include <GL\glew.h>
#include<glm\glm.hpp>


class Light
{
	public:
		Light();
		Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity , GLfloat xDir, GLfloat yDir, GLfloat zDir , GLfloat dIntensity);

		void UseLight(GLfloat ambientIntensityLocationID, GLfloat ambientColorLocationID, GLfloat diffuseIntensityLocationID, GLfloat directionLocationID);
		~Light();
	private:
		glm::vec3 color;
		GLfloat ambientIntensity;

		glm::vec3 direction;
		GLfloat diffuseIntensity;


};

