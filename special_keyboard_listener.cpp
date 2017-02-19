#include "header_special_keyboard_listener.h"
extern GLdouble cameras_y, cameras_z, cameras_x, cameras_rx, cameras_rz, cameras_ry, cameras_ey, cameras_ex, cameras_ez;
extern viewport_camera camera1;
GLvoid special_keyboard_listener(GLint key, GLint x, GLint y)
{
	switch (key)
	{
	case GLUT_KEY_DOWN:	
		camera1.set_cameras_ex_cx(cameras_ex++, cameras_x++);
		camera1.set_cameras_ez_cz(cameras_ez++, cameras_z++);
		break;
	case GLUT_KEY_RIGHT:
		camera1.set_cameras_exez_cxcz(cameras_ex--, cameras_ez++, cameras_x--, cameras_z++);
		break;
	case GLUT_KEY_UP:
		camera1.set_cameras_ex_cx(cameras_ex--, cameras_x--);
		camera1.set_cameras_ez_cz(cameras_ez--, cameras_z--);
		break;
	case GLUT_KEY_LEFT:
		camera1.set_cameras_exez_cxcz(cameras_ex++, cameras_ez--, cameras_x++, cameras_z--);
		break;
	default:
		cout << "command not detected \n";
		break;
	}
}