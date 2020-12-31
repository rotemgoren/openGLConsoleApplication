#pragma once

#include <GL\glew.h>
#define NUM_PARAMERTER_PER_VERTEX 8
#define VERTEX_OFFSET_TO_TEXTURE 3
#define VERTEX_OFFSET_TO_NORMAL 5
class Mesh
{
public:
	Mesh();

	void CreateMesh(GLfloat *vertices, unsigned int *indices, unsigned int numOfVertices, unsigned int numOfIndices);
	void RenderMesh();
	void ClearMesh();

	~Mesh();

private:
	GLuint VAO, VBO, IBO;
	GLsizei indexCount;
};

