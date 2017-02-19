#include "header_pivot_point.h"

GLint pivot_point::object_counter = 0;


pivot_point::pivot_point()//default constructor
{
	object_counter++;
	set_pivot_coordinates3f(0.0f, 0.0f, 0.0f);
}


pivot_point::pivot_point(GLdouble x, GLdouble y, GLdouble z)//constructor override
{
	object_counter++;
	set_pivot_coordinates3f(x, y, z);
}

pivot_point::~pivot_point()//destructor
{
	object_counter--;
}

GLint pivot_point::get_object_counter()
{
	return object_counter;
}

GLdouble pivot_point::get_pivot_x()//getting pivots X coordinates
{
	return pivot_x;
}


GLdouble pivot_point::get_pivot_y()//getting pivots Y coordinates
{
	return pivot_y;
}


GLdouble pivot_point::get_pivot_z()//getting pivots Z coordinates
{
	return pivot_z;
}

GLdouble pivot_point::get_pivot_rx()
{
	return pivot_rx;
}

GLdouble pivot_point::get_pivot_ry()
{
	return pivot_ry;
}

GLdouble pivot_point::get_pivot_rz()
{
	return pivot_rz;
}

GLdouble pivot_point::get_pivot_sx()
{
	return pivot_sx;
}

GLdouble pivot_point::get_pivot_sy()
{
	return pivot_sy;
}

GLdouble pivot_point::get_pivot_sz()
{
	return pivot_sz;
}

GLvoid pivot_point::set_pivot_sx(GLdouble* sx)
{
	pivot_point::pivot_sx = *sx;
}

GLvoid pivot_point::set_pivot_sy(GLdouble* sy)
{
	pivot_point::pivot_sy = *sy;
}

GLvoid pivot_point::set_pivot_sz(GLdouble* sz)
{
	pivot_point::pivot_sz = *sz;
}

GLvoid pivot_point::set_pivot_rx(GLdouble* rx)
{
	pivot_rx = *rx;
}

GLvoid pivot_point::set_pivot_ry(GLdouble* ry)
{
	pivot_ry = *ry;
}

GLvoid pivot_point::set_pivot_rz(GLdouble* rz)
{
	pivot_rz = *rz;
}

GLvoid pivot_point::set_pivot_x(GLdouble* x)//setting pivots X coordinates
{
	pivot_x = *x;
}

GLvoid pivot_point::set_pivot_y(GLdouble* y)//setting pivots Y coordinates
{
	pivot_y = *y;
}

GLvoid pivot_point::set_pivot_z(GLdouble* z)//setting pivots Z coordinates
{
	pivot_z = *z;
}

GLvoid pivot_point::set_pivot_coordinates3f(GLdouble x, GLdouble y, GLdouble z)//setting 3 dimensional coordinates
{
	set_pivot_x(&x);
	set_pivot_y(&y);
	set_pivot_z(&z);
}

GLvoid pivot_point::set_pivot_r3f(GLdouble rx, GLdouble ry, GLdouble rz)
{
	set_pivot_rx(&rx);
	set_pivot_ry(&ry);
	set_pivot_rz(&rz);
}

GLvoid pivot_point::set_pivot_s3f(GLdouble sx, GLdouble sy, GLdouble sz)
{
	set_pivot_sx(&sx);
	set_pivot_sy(&sy);
	set_pivot_sz(&sz);
}

GLvoid pivot_point::pivot_axis_directional_pipoint()//pivots render
{

	glPushMatrix();
	glTranslatef(get_pivot_x(), get_pivot_y(), get_pivot_z());

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

