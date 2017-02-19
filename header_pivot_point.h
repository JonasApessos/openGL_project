#pragma once
#include <stdio.h>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"


class pivot_point
{
private:
	GLdouble pivot_x = 0.0, pivot_y = 0.0, pivot_z = 0.0;//coordinates
	GLdouble pivot_rx = 0.0, pivot_ry = 0.0, pivot_rz = 0.0;//degrees variable
	GLdouble pivot_sx = 1.0, pivot_sy = 1.0, pivot_sz = 1.0;//scale multipler variables
	/*
	GLfloat pivot_local_x = 0.0f, pivot_local_y = 0.0f, pivot_local_z = 0.0f;//coordinates
	GLfloat pivot_local_degrees_x = 0.0f, pivot_local_degrees_y = 0.0f, pivot_local_degrees_z = 0.0f;//degrees variable
	GLfloat pivot_local_scale_x = 1.0f, pivot_local_scale_y = 1.0f, pivot_local_scale_z = 1.0f;//scale multipler variables
	*/
	static GLint object_counter;//getting the number of object instance currently created
public:
	pivot_point();//default constructor
	pivot_point(GLdouble, GLdouble, GLdouble);//constructor override
	~pivot_point();//destructor

	GLint get_object_counter();

	GLdouble get_pivot_x();//getting pivots X world coordinates
	GLdouble get_pivot_y();//getting pivots Y world coordinates
	GLdouble get_pivot_z();//getting pivots Z world coordinates

	GLdouble get_pivot_rx();//getting pivots X world degrees
	GLdouble get_pivot_ry();//getting pivots Y world degrees
	GLdouble get_pivot_rz();//getting pivots Z world degrees

	GLdouble get_pivot_sx();//getting pivots X world scale multiplier
	GLdouble get_pivot_sy();//getting pivots Y world scale multiplier
	GLdouble get_pivot_sz();//getting pivots Z world scale multiplie

	GLvoid set_pivot_sx(GLdouble*);//setting pivots X world scale multiplier
	GLvoid set_pivot_sy(GLdouble*);//setting pivots Y world scale multiplier
	GLvoid set_pivot_sz(GLdouble*);//setting pivots Z world scale multiplier

	GLvoid set_pivot_rx(GLdouble*);//setting pivots X world degrees
	GLvoid set_pivot_ry(GLdouble*);//setting pivots Y world degrees
	GLvoid set_pivot_rz(GLdouble*);//setting pivots Z world degrees

	GLvoid set_pivot_x(GLdouble*);//setting pivots X world coordinates
	GLvoid set_pivot_y(GLdouble*);//setting pivots Y world coordinates
	GLvoid set_pivot_z(GLdouble*);//setting pivots Z world coordinates

	GLvoid set_pivot_coordinates3f(GLdouble, GLdouble, GLdouble);//setting 3 dimensional world coordinates
	GLvoid set_pivot_r3f(GLdouble, GLdouble, GLdouble);//setting pivots 3 dimensional world degrees
	GLvoid set_pivot_s3f(GLdouble, GLdouble, GLdouble);//setting 3 dimensional uniform world scale multiplier

	GLvoid pivot_axis_directional_pipoint();//pivots render
};
