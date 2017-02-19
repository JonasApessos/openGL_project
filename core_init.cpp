#include "header_core_init.h"
GLint main_window_id = 0;

using namespace std;

GLvoid core_loop()
{
	glutDisplayFunc(core_render);
	glutReshapeFunc(core_changer);
	glutKeyboardFunc(keyboard_listener);
	glutSpecialFunc(special_keyboard_listener);
	glutIdleFunc(core_render);

}

GLvoid core_init(GLint argc,GLchar* argv)
{
	glutInit(&argc, &argv);
	glutInit_ATEXIT_HACK(&argc, &argv); //use this instead if glutInit() fails

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) / 4), (glutGet(GLUT_SCREEN_HEIGHT) / 4));
	glutInitWindowSize((glutGet(GLUT_SCREEN_WIDTH) / 2), (glutGet(GLUT_SCREEN_HEIGHT) / 2));
	
	main_window_id = glutCreateWindow_ATEXIT_HACK("derva core");
	//main_window_id = glutCreateWindow("Derva Core");
	GLenum window_state = glewInit();
	if (window_state != GLEW_OK)
	{
		fprintf(stderr, "ERROR '%s' \n", glewGetErrorString(window_state));
		system("pause");
		exit(1);
	}

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
}