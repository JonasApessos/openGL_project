#include "header_keyboard_listener.h"
extern GLfloat red, green, blue;
extern GLdouble cameras_y;
extern object object1, object2;
GLfloat increment_movement = 0.0f , increment_height = 0.0f;

GLvoid keyboard_listener(unsigned char pressed_key,GLint,GLint)
{
	switch (pressed_key)
	{
	case '1':
		red = 1.0f;
		green = 0.0f;
		blue = 0.0f;
		break;
	case '2':
		red = 0.0f;
		green = 1.0f;
		blue = 0.0f;
		break;
	case '3':
		red = 0.0f;
		green = 0.0f;
		blue = 1.0f;
		break;
	case '4':
		red = 0.5f;
		green = 0.5f;
		blue = 0.5f;
		break;
	case '5':
		red = 0.5f;
		green = 0.5f;
		blue = 0.0f;
		break;
	case '6':
		red = 0.0f;
		green = 0.5f;
		blue = 0.5f;
		break;
	case '7':
		red = 0.5f;
		green = 0.0f;
		blue = 0.5f;
		break;
	case 32:
		cameras_y++;
		break;
	case 'e':
		cameras_y--;
		break;
	case 'g':
		object1.set_gravity(true);
		break;
	case 'h':
		object1.set_gravity(false);
		break;
	default:
		red = 0.0f;
		green = 0.0f;
		blue = 0.0f;
		break;
	}
}