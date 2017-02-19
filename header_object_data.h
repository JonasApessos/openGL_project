#pragma once
#include "iostream"
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
using namespace std;

class object
{
private:
	GLfloat object_x = 0.0f, object_y = 0.0f, object_z = 0.0f;
	GLfloat object_rx = 0.0f, object_ry = 0.0f, object_rz = 0.0f;
	GLfloat object_sx = 1.0f, object_sy = 1.0f, object_sz = 1.0f;
	GLboolean gravity = false;
	GLfloat g_force = 0.0f;
public:

	static GLint object_counter;

	object();
	object(GLfloat, GLfloat, GLfloat);
	~object();

	inline GLfloat get_object_x();
	inline GLfloat get_object_y();
	inline GLfloat get_object_z();

	inline GLfloat get_object_rx();
	inline GLfloat get_object_ry();
	inline GLfloat get_object_rz();

	inline GLfloat get_object_sx();
	inline GLfloat get_object_sy();
	inline GLfloat get_object_sz();


	inline GLvoid set_object_x(GLfloat*);
	inline GLvoid set_object_y(GLfloat*);
	inline GLvoid set_object_z(GLfloat*);

	inline GLvoid set_object_rx(GLfloat*);
	inline GLvoid set_object_ry(GLfloat*);
	inline GLvoid set_object_rz(GLfloat*);

	inline GLvoid set_object_sx(GLfloat*);
	inline GLvoid set_object_sy(GLfloat*);
	inline GLvoid set_object_sz(GLfloat*);

	GLvoid set_object_3d(GLfloat, GLfloat, GLfloat);
	GLvoid set_object_r3d(GLfloat, GLfloat, GLfloat);
	GLvoid set_object_s3d(GLfloat, GLfloat, GLfloat);

	GLvoid set_gravity(GLboolean);
	GLboolean get_gravity();

	GLvoid pivot_point();

	GLvoid active();
	GLvoid object_geometry_data();

};