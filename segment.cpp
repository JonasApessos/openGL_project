#pragma once
#include "header_segment.h"

segment::segment()
{
	vertex_s.set_vertex_position(0.0, 0.0, 0.0);
	vertex_e.set_vertex_position(0.0, 0.0, 0.0);
	segment_draw(false);
}

segment::segment(GLfloat x_s, GLfloat y_s, GLfloat z_s, GLfloat x_e, GLfloat y_e, GLfloat z_e)
{
	vertex_s.set_vertex_position(x_s, y_s, z_s);
	vertex_s.set_vertex_position(x_e, y_e, z_e);
	segment_draw(false);
}

segment::~segment()
{
	vertex_s.~vertex();
	vertex_e.~vertex();
}

inline GLfloat segment::get_segmentx_s()
{
	return vertex_s.get_vertex_x();
}

inline GLfloat segment::get_segmenty_s()
{
	return vertex_s.get_vertex_y();
}

inline GLfloat segment::get_segmentz_s()
{
	return vertex_s.get_vertex_z();
}

inline GLfloat segment::get_segmentx_e()
{
	return vertex_e.get_vertex_x();
}

inline GLfloat segment::get_segmenty_e()
{
	return vertex_e.get_vertex_y();
}

inline GLfloat segment::get_segmentz_e()
{
	return vertex_e.get_vertex_z();
}

inline GLvoid segment::set_segment_pos_s(GLfloat x_s, GLfloat y_s, GLfloat z_s)
{
	vertex_s.set_vertex_position(x_s, y_s, z_s);
}

inline GLvoid segment::set_segment_pos_e(GLfloat x_e, GLfloat y_e, GLfloat z_e)
{
	vertex_e.set_vertex_position(x_e, y_e, z_e);
}

GLvoid segment::segment_draw(GLboolean set_segment_visibility)
{
	set_segment_visibility = true;
	if (set_segment_visibility)
	{
		vertex_s.vertex_draw(true);
		vertex_e.vertex_draw(true);
		glPushMatrix();
		glBegin(GL_LINES);
	    glVertex3f(get_segmentx_s(), get_segmenty_s(), get_segmentz_s());//memmory error
		glVertex3f(get_segmentx_e(), get_segmenty_e(), get_segmentz_e());//memory error
		glEnd();
		glPopMatrix();
	}
}