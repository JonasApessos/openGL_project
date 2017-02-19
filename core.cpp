#include "header_core_init.h"

GLint main(GLint argc, GLchar** argv)
{	
	core_init(argc,*argv);

	core_loop();
	glutMainLoop();

	system("pause");
	return 0;
}

