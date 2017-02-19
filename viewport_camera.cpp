#include "header_viewport_camera.h"

GLint viewport_camera::camera_counter = 0;

viewport_camera::viewport_camera()
{
	set_cameras_coordinates(0.0, 0.0, 0.0,
		1.0, 1.0, 1.0,
		0.0, 1.0, 0.0);
	camera_counter++;
}

viewport_camera::viewport_camera(GLdouble ex, GLdouble ey, GLdouble ez, GLdouble cx, GLdouble cy, GLdouble cz, GLdouble rx, GLdouble ry, GLdouble rz)
{
	set_cameras_coordinates(&ex, &ey, &ez, &cx, &cy, &cz, &rx, &ry, &rz);
	camera_counter++;
}

viewport_camera::~viewport_camera()
{
	camera_counter--;
}

GLdouble* viewport_camera::get_cameras_ex()
{
	return &cameras_ex;
}

GLdouble* viewport_camera::get_cameras_ey()
{
	return &cameras_ey;
}

GLdouble* viewport_camera::get_cameras_ez()
{
	return &cameras_ez;
}



GLdouble* viewport_camera::get_cameras_cx()
{
	return &cameras_cx;
}

GLdouble* viewport_camera::get_cameras_cy()
{
	return &cameras_cy;
}

GLdouble* viewport_camera::get_cameras_cz()
{
	return &cameras_cz;
}



GLdouble* viewport_camera::get_cameras_rx()
{
	return &cameras_rx;
}

GLdouble* viewport_camera::get_cameras_ry()
{
	return &cameras_ry;
}

GLdouble* viewport_camera::get_cameras_rz()
{
	return &cameras_rz;
}


GLvoid viewport_camera::set_cameras_ex(GLdouble* ex)
{
	cameras_ex = *ex;
}

GLvoid viewport_camera::set_cameras_ey(GLdouble* ey)
{
	cameras_ey = *ey;
}

GLvoid viewport_camera::set_cameras_ez(GLdouble* ez)
{
	cameras_ez = *ez;
}



GLvoid viewport_camera::set_cameras_cx(GLdouble* cx)
{
	cameras_cx = *cx;
}

GLvoid viewport_camera::set_cameras_cy(GLdouble* cy)
{
	cameras_cy = *cy;
}

GLvoid viewport_camera::set_cameras_cz(GLdouble* cz)
{
	cameras_cz = *cz;
}



GLvoid viewport_camera::set_cameras_rx(GLdouble* rx)
{
	cameras_rx = *rx;
}

GLvoid viewport_camera::set_cameras_ry(GLdouble* ry)
{
	cameras_ry = *ry;
}

GLvoid viewport_camera::set_cameras_rz(GLdouble* rz)
{
	cameras_rz = *rz;
}



GLvoid viewport_camera::set_cameras_ex(GLdouble ex)
{
	cameras_ex = ex;
}

GLvoid viewport_camera::set_cameras_ey(GLdouble ey)
{
	cameras_ey = ey;
}

GLvoid viewport_camera::set_cameras_ez(GLdouble ez)
{
	cameras_ez = ez;
}



GLvoid viewport_camera::set_cameras_cx(GLdouble cx)
{
	cameras_cx = cx;
}

GLvoid viewport_camera::set_cameras_cy(GLdouble cy)
{
	cameras_cy = cy;
}

GLvoid viewport_camera::set_cameras_cz(GLdouble cz)
{
	cameras_cz = cz;
}



GLvoid viewport_camera::set_cameras_rx(GLdouble rx)
{
	cameras_rx = rx;
}

GLvoid viewport_camera::set_cameras_ry(GLdouble ry)
{
	cameras_ry = ry;
}

GLvoid viewport_camera::set_cameras_rz(GLdouble rz)
{
	cameras_rz = rz;
}



GLvoid viewport_camera::set_cameras_e3d(GLdouble ex, GLdouble ey, GLdouble ez)
{
	set_cameras_ex(&ex);
	set_cameras_ey(&ey);
	set_cameras_ez(&ez);
	
}



GLvoid viewport_camera::set_cameras_e3d(GLdouble* ex, GLdouble* ey, GLdouble* ez)
{
	set_cameras_ex(*ex);
	set_cameras_ey(*ey);
	set_cameras_ez(*ez);
}



GLvoid viewport_camera::set_cameras_c3d(GLdouble cx, GLdouble cy, GLdouble cz)
{
	set_cameras_cx(&cx);
	set_cameras_cy(&cy);
	set_cameras_cz(&cz);
}



GLvoid viewport_camera::set_cameras_c3d(GLdouble* cx, GLdouble* cy, GLdouble* cz)
{
	set_cameras_cx(*cx);
	set_cameras_cy(*cy);
	set_cameras_cz(*cz);
}


GLvoid viewport_camera::set_cameras_cr3d(GLdouble rx, GLdouble ry, GLdouble rz)
{
	set_cameras_rx(&rx);
	set_cameras_ry(&ry);
	set_cameras_rz(&rz);
}


GLvoid viewport_camera::set_cameras_cr3d(GLdouble* rx, GLdouble* ry, GLdouble* rz)
{
	set_cameras_rx(*rx);
	set_cameras_ry(*ry);
	set_cameras_rz(*rz);
}


GLvoid viewport_camera::set_cameras_coordinates(GLdouble ex, GLdouble ey, GLdouble ez, GLdouble cx, GLdouble cy, GLdouble cz, GLdouble rx, GLdouble ry, GLdouble rz)
{
	set_cameras_e3d(ex, ey, ez);
	set_cameras_c3d(cx, cy, cz);
	set_cameras_cr3d(rx, ry, rz);
}


GLvoid viewport_camera::set_cameras_coordinates(GLdouble* ex, GLdouble* ey, GLdouble* ez, GLdouble* cx, GLdouble* cy, GLdouble* cz, GLdouble* rx, GLdouble* ry, GLdouble* rz)
{
	set_cameras_e3d(*ex, *ey, *ez);
	set_cameras_c3d(*cx, *cy, *cz);
	set_cameras_cr3d(*rx, *ry, *rz);
}


GLvoid viewport_camera::set_cameras_ex_cx(GLdouble ex, GLdouble cx)
{
	set_cameras_ex(&ex);
	set_cameras_cx(&cx);
}

GLvoid viewport_camera::set_cameras_ey_cy(GLdouble ey, GLdouble cy)
{
	set_cameras_ey(&ey);
	set_cameras_cy(&cy);
}

GLvoid viewport_camera::set_cameras_ez_cz(GLdouble ez, GLdouble cz)
{
	set_cameras_ez(&ez);
	set_cameras_cz(&cz);
}

GLvoid viewport_camera::set_cameras_exez_cxcz(GLdouble ex, GLdouble ez, GLdouble cx, GLdouble cz)
{
	set_cameras_ex(&ex);
	set_cameras_ez(&ez);
	set_cameras_cx(&cx);
	set_cameras_cz(&cz);
}




GLvoid viewport_camera::draw_cameras_data()
{
	glLoadIdentity();
	gluLookAt(cameras_ex, cameras_ey, cameras_ez,
		cameras_cx, cameras_cy, cameras_cz,
		cameras_rx, cameras_ry, cameras_rz);
	/*
	glPushMatrix();
	    glTranslatef(cameras_cx, cameras_cy, cameras_cz);
	    glutWireCube(0.25);
	    glPushMatrix();
	        glBegin(GL_LINE_LOOP);
			glVertex3f(0.25f, 0.0f, 0.0f);
			glVertex3f(0.5f, 0.0f, 1.0f);

			glVertex3f(-0.5f, 0.0f, 1.0f);
			glVertex3f(-0.25f, 0.0f, 0.0f);

			glVertex3f(0.25f, -0.5f, 0.0f);
			glVertex3f(0.5f, -0.5f, 1.0f);

			glVertex3f(-0.5f, -0.5f, 1.0f);
			glVertex3f(-0.25f, -0.5f, 0.0f);

			glVertex3f(0.25f, -0.5f, 0.0f);
	        glEnd();
	glPopMatrix();
	glPopMatrix();*/
	glFlush();
}