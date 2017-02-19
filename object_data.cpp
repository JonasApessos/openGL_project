#include "header_object_data.h"

GLint object::object_counter = 0;

object::object()
{
	set_object_3d(0.0f, 0.0f, 0.0f);
	set_object_r3d(0.0f, 0.0f, 0.0f);
	set_object_s3d(1.0f, 1.0f, 1.0f);

	set_object_3d(0.0f, 0.0f, 0.0f);
	set_object_r3d(0.0f, 0.0f, 0.0f);
	set_object_s3d(1.0f, 1.0f, 1.0f);

	object_counter++;
}

object::object(GLfloat object_x, GLfloat object_y, GLfloat object_z)
{
	set_object_3d(object_x, object_y, object_z);
	object_counter++;
}

object::~object()
{
	set_object_3d(0.0f, 0.0f, 0.0f);
	set_object_r3d(0.0f, 0.0f, 0.0f);
	set_object_s3d(0.0f, 0.0f, 0.0f);

	set_object_3d(0.0f, 0.0f, 0.0f);
	set_object_r3d(0.0f, 0.0f, 0.0f);
	set_object_s3d(0.0f, 0.0f, 0.0f);
	object_counter--;
}



inline GLfloat object::get_object_x()
{
	return object_x;
}

inline GLfloat object::get_object_y()
{
	return object_y;
}

inline GLfloat object::get_object_z()
{
	return object_z;
}



inline GLfloat object::get_object_rx()
{
	return object_rx;
}

inline GLfloat object::get_object_ry()
{
	return object_ry;
}

inline GLfloat object::get_object_rz()
{
	return object_rz;
}



inline GLfloat object::get_object_sx()
{
	return object_sx;
}

inline GLfloat object::get_object_sy()
{
	return object_sy;
}

inline GLfloat object::get_object_sz()
{
	return object_sz;
}



inline GLvoid object::set_object_x(GLfloat* x)
{
	object_x = *x;
}

inline GLvoid object::set_object_y(GLfloat* y)
{
	object_y = *y;
}

inline GLvoid object::set_object_z(GLfloat* z)
{
	object_z = *z;
}



inline GLvoid object::set_object_rx(GLfloat* rx)
{
	object_rx = *rx;
}

inline GLvoid object::set_object_ry(GLfloat* ry)
{
	object_ry = *ry;
}

inline GLvoid object::set_object_rz(GLfloat* rz)
{
	object_rz = *rz;
}



inline GLvoid object::set_object_sx(GLfloat* sx)
{
	object_sx = *sx;
}

inline GLvoid object::set_object_sy(GLfloat* sy)
{
	object_sy = *sy;
}

inline GLvoid object::set_object_sz(GLfloat* sz)
{
	object_sz = *sz;
}



GLvoid object::set_object_3d(GLfloat x, GLfloat y, GLfloat z)
{
	set_object_x(&x);
	set_object_y(&y);
	set_object_z(&z);
}

GLvoid object::set_object_r3d(GLfloat rx, GLfloat ry, GLfloat rz)
{
	set_object_rx(&rx);
	set_object_ry(&ry);
	set_object_rz(&rz);
}

GLvoid object::set_object_s3d(GLfloat sx, GLfloat sy, GLfloat sz)
{
	set_object_sx(&sx);
	set_object_sy(&sy);
	set_object_sz(&sz);
}


GLvoid object::set_gravity(GLboolean set_gravity)
{
	gravity = set_gravity;
}

GLboolean object::get_gravity()
{
	return gravity;
}

GLvoid object::pivot_point()
{
	glPushMatrix();
	glTranslatef(get_object_x(), get_object_y(), get_object_z());

	glLineWidth(2.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	//X directional Axis
	glPushMatrix();
	glPushMatrix();
	glBegin(GL_LINES);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//setting X directional Axis
	glPushMatrix();
	glTranslatef(1.0f, 0.0f, 0.0f);
	glRotatef(90, 0.0f, -1.0f, 0.0f);
	glutSolidCone(-0.05f, -0.2f, 7, 0);
	glPopMatrix();

	glPopMatrix();

	//Z directional Axis
	glColor3f(0.0f, 0.0f, 1.0f);
	glPushMatrix();

	glPushMatrix();
	glBegin(GL_LINES);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glEnd();
	glPopMatrix();

	//setting Z directional cone
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 1.0f);
	glRotatef(180, 1.0f, 0.0f, 0.0f);
	glutSolidCone(-0.05f, -0.2f, 7, 0);
	glPopMatrix();

	glPopMatrix();

	//Y directional Axis
	glColor3f(0.0f, 1.0f, 0.0f);
	glPushMatrix();

	glPushMatrix();
	glBegin(GL_LINES);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glEnd();
	glPopMatrix();

	//setting Y axis directional cone
	glPushMatrix();
	glTranslatef(0.0f, 1.0f, 0.0f);
	glRotatef(90, 1.0f, 0.0f, 0.0f);
	glutSolidCone(-0.05f, -0.2f, 7, 0);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
	glFlush();
}

GLvoid object::active()
{

}

GLvoid object::object_geometry_data()
{
	pivot_point();

	glColor3f(0.5f, 0.5f, 0.5f);
	glPushMatrix();
	if (gravity)
	{
		set_object_y(&(g_force -= 0.01f));
	}

	glPushMatrix();
	/*glRotatef(get_pivot_rx(), 1.0f, 0.0f, 0.0f);
	glRotatef(get_pivot_ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(get_pivot_rz(), 0.0f, 0.0f, 1.0f);
	glTranslatef(get_pivot_x(), get_pivot_y(), get_pivot_z());
	glScalef(get_pivot_sx(), get_pivot_sy(), get_pivot_sz());*/

	glPushMatrix();

	glTranslatef(get_object_x(),get_object_y(),get_object_z());
	glRotatef(get_object_rx(), 1.0f, 0.0f , 0.0f);
	glRotatef(get_object_ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(get_object_rz(), 0.0f, 0.0f, 1.0f);

	glScalef(get_object_sx(), get_object_sy(), get_object_sz());
	glutSolidCube(-1.0);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	glFlush();
}