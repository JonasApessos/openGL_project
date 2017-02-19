#pragma once
#include "iostream"
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

using namespace std;

class vertex
{
private:
	GLfloat vertex_x = 0.0f, vertex_y = 0.0f, vertex_z = 0.0f;

public:
	vertex();
	vertex(GLfloat,GLfloat,GLfloat);
	~vertex();

	inline GLfloat get_vertex_x();
	inline GLfloat get_vertex_y();
	inline GLfloat get_vertex_z();

	inline GLvoid set_vertex_x(GLfloat*);
	inline GLvoid set_vertex_y(GLfloat*);
	inline GLvoid set_vertex_z(GLfloat*);

	GLvoid set_vertex_position(GLfloat,GLfloat,GLfloat);

	GLvoid vertex_draw(GLboolean);
};