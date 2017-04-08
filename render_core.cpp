#pragma once
#include "header_render_core.h"
extern GLint window_width, window_height;
GLint counter = 0 , time = 0 , base_time = 0;
GLfloat red = 0.0f, green = 0.0f, blue = 0.0f;
GLfloat pivot_degrees_x = 0.0f, pivot_degrees_y = 0.0f, pivot_degrees_z = 0.0f , pivot_scale_x = 0.1f;
GLdouble cameras_y = 3.0, cameras_x = 1.0, cameras_z = 1.0;
GLdouble cameras_ey = 0.0, cameras_ex = 0.0, cameras_ez = 0.0;
GLdouble cameras_rx = 0.0, cameras_ry = 1.0, cameras_rz = 0.0;
object object1;
viewport_camera camera1;
viewport_camera camera2(0.0, 1.0, 0.0,1.0, 1.0, 0.0,0.0, 1.0, 0.0);
viewport_camera camera3(0.0, 1.0, 0.0,0.0, 1.0, 1.0,0.0, 1.0, 0.0);
viewport_camera camera4(0.0, 0.1, 0.0, 0.001, 1.0, 0.0, 0.0, 1.0, 0.0);



GLvoid core_render()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//glMatrixMode(GL_PROJECTION);

	core_viewport_one();

	core_viewport_two();

	core_viewport_three();

	core_viewport_four();

	//glMatrixMode(GL_MODELVIEW);

	fps_counter();
	glutSwapBuffers();

}

GLvoid core_viewport_one()
{
	glViewport(0, window_height / 2, window_width / 2, window_height / 2);
	camera1.set_cameras_c3d(cameras_x, cameras_y, cameras_z);
	camera1.set_cameras_e3d(cameras_ex, cameras_ey, cameras_ez);
	camera1.set_cameras_cr3d(cameras_rx, cameras_ry, cameras_rz);
	camera1.draw_cameras_data();
	

	cameras_y = cameras_y - 2;
	core_render_container();
}

GLvoid core_viewport_two()
{
	glViewport(window_width / 2, window_height / 2, window_width / 2, window_height / 2);
	camera2.draw_cameras_data();
	camera2.set_cameras_cy(&cameras_y);
	camera2.set_cameras_ey(&cameras_y);

	core_render_container();
}

GLvoid core_viewport_three()
{
	glViewport(0, 0, window_width / 2, window_height / 2);
	camera3.draw_cameras_data();
	camera3.set_cameras_cy(&cameras_y);
	camera3.set_cameras_ey(&cameras_y);

	core_render_container();
}

GLvoid core_viewport_four()
{
	glViewport(window_width / 2, 0, window_width / 2, window_height / 2);
	camera4.draw_cameras_data();
	camera4.set_cameras_cy(&cameras_y);
	camera4.set_cameras_ey(&cameras_y);
	cameras_y = cameras_y + 2;
	core_render_container();

}

GLvoid quad_plane()
{
	glPushMatrix();
	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(100.0f, 0.0f, 100.0f);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex3f(-100.0f, 0.0f, 100.0f);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-100.0f, 0.0f, -100.0f);
	glVertex3f(100.0f, 0.0f, -100.0f);

	glEnd();
	glPopMatrix();
	glFlush();
}

GLvoid fps_counter()
{
	counter++;
	time = glutGet(GLUT_ELAPSED_TIME);

	if (time - base_time >= 1000)
	{
		printf("FPS : %d\n", ((counter * 1000) / (time - base_time)));
		base_time = time;
		counter = 0;
	}
}

GLvoid core_render_container()
{
	quad_plane();
	object1.object_geometry_data();
	//object1.set_pivot_coordinates3f(0.0f, 0.0f, 0.0f);
	object1.set_object_r3d(0.0f, pivot_degrees_y += 0.5f, 0.0f);
}
