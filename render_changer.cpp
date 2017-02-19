#include "header_render_change.h"
GLfloat ratio = 0.0f;
GLint window_width = 0;
GLint window_height = 0;
GLvoid core_changer(GLint win_x, GLint win_y)
{
	window_width = win_x;
	window_height = win_y;

	if (win_y == 0)
	{
		win_y = 1;
	}

	ratio =(GLfloat) win_x / win_y;

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	gluPerspective(55, ratio, 0.1, 100.0);

	glMatrixMode(GL_MODELVIEW);


}