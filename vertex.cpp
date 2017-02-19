#include "header_vertex.h"


vertex::vertex()
{
	set_vertex_position(0.0f, 0.0f, 0.0f);
	vertex_draw(false);
}

vertex::vertex(GLfloat x , GLfloat y, GLfloat z)
{
	set_vertex_position(x, y, z);
	vertex_draw(false);
}

vertex::~vertex()
{
	set_vertex_position(NULL, NULL, NULL);
}

inline GLfloat vertex::get_vertex_x()
{
	return vertex_x;
}

inline GLfloat vertex::get_vertex_y()
{
	return vertex_y;
}

inline GLfloat vertex::get_vertex_z()
{
	return vertex_z;
}

inline GLvoid vertex::set_vertex_x(GLfloat* x)
{
	vertex_x = *x;
}

inline GLvoid vertex::set_vertex_y(GLfloat* y)
{
	vertex_y = *y;
}

inline GLvoid vertex::set_vertex_z(GLfloat* z)
{
	vertex_z = *z;
}

GLvoid vertex::set_vertex_position(GLfloat x,GLfloat y,GLfloat z)
{
	set_vertex_x(&x);
	set_vertex_y(&y);
	set_vertex_z(&z);
}

GLvoid vertex::vertex_draw(GLboolean set_vertex_visibility)
{
	if (set_vertex_visibility)
	{
		glPushMatrix();
			glBegin(GL_POLYGON);
				glVertex3f(0.0f, 0.0f, 0.0f);
				glVertex3f(0.1f, 0.0f, 0.0f);
				glVertex3f(0.1f, -0.1f, 0.0f);
				glVertex3f(0.0f, -0.1f, 0.0f);
			glEnd();
		glPopMatrix();
	}
}