#pragma once
#include "header_vertex.h"

class segment
{
private:
	vertex vertex_s, vertex_e;
public:
	segment();
	segment(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat);
	~segment();

	inline GLfloat get_segmentx_s();
	inline GLfloat get_segmenty_s();
	inline GLfloat get_segmentz_s();

	inline GLfloat get_segmentx_e();
	inline GLfloat get_segmenty_e();
	inline GLfloat get_segmentz_e();

	inline GLvoid set_segment_pos_s(GLfloat, GLfloat, GLfloat);

	inline GLvoid set_segment_pos_e(GLfloat, GLfloat, GLfloat);

	GLvoid segment_draw(GLboolean);
};
