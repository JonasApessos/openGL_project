#pragma once
#include "header_object_data.h"
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

class viewport_camera : public object
{
private:
	GLdouble cameras_ex = 0.0, cameras_ey = 0.0, cameras_ez = 0.0;
	GLdouble cameras_cx = 0.0, cameras_cy = 0.0, cameras_cz = 0.0;
	GLdouble cameras_rx = 0.0, cameras_ry = 0.0f, cameras_rz = 0.0;

	static GLint camera_counter;
public:

	viewport_camera();
	viewport_camera(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);

	~viewport_camera();

	GLdouble* get_cameras_ex();
	GLdouble* get_cameras_ey();
	GLdouble* get_cameras_ez();

	GLdouble* get_cameras_cx();
	GLdouble* get_cameras_cy();
	GLdouble* get_cameras_cz();

	GLdouble* get_cameras_rx();
	GLdouble* get_cameras_ry();
	GLdouble* get_cameras_rz();


	GLvoid set_cameras_ex(GLdouble*);
	GLvoid set_cameras_ey(GLdouble*);
	GLvoid set_cameras_ez(GLdouble*);

	GLvoid set_cameras_cx(GLdouble*);
	GLvoid set_cameras_cy(GLdouble*);
	GLvoid set_cameras_cz(GLdouble*);

	GLvoid set_cameras_rx(GLdouble*);
	GLvoid set_cameras_ry(GLdouble*);
	GLvoid set_cameras_rz(GLdouble*);

	GLvoid set_cameras_ex(GLdouble);
	GLvoid set_cameras_ey(GLdouble);
	GLvoid set_cameras_ez(GLdouble);

	GLvoid set_cameras_cx(GLdouble);
	GLvoid set_cameras_cy(GLdouble);
	GLvoid set_cameras_cz(GLdouble);

	GLvoid set_cameras_rx(GLdouble);
	GLvoid set_cameras_ry(GLdouble);
	GLvoid set_cameras_rz(GLdouble);

	GLvoid set_cameras_e3d(GLdouble, GLdouble, GLdouble);

	GLvoid set_cameras_e3d(GLdouble*, GLdouble*, GLdouble*);

	GLvoid set_cameras_c3d(GLdouble, GLdouble, GLdouble);

	GLvoid set_cameras_c3d(GLdouble*, GLdouble*, GLdouble*);

	GLvoid set_cameras_cr3d(GLdouble, GLdouble, GLdouble);

	GLvoid set_cameras_cr3d(GLdouble*, GLdouble*, GLdouble*);

	GLvoid set_cameras_coordinates(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);

	GLvoid set_cameras_coordinates(GLdouble*, GLdouble*, GLdouble*, GLdouble*, GLdouble*, GLdouble*, GLdouble*, GLdouble*, GLdouble*);

	GLvoid set_cameras_ex_cx(GLdouble, GLdouble);

	GLvoid set_cameras_ey_cy(GLdouble, GLdouble);

	GLvoid set_cameras_ez_cz(GLdouble, GLdouble);

	GLvoid set_cameras_exez_cxcz(GLdouble, GLdouble , GLdouble , GLdouble);

	GLvoid draw_cameras_data();
};