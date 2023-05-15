//header files
#include<GL/freeglut.h>

// Global variables declarations
bool bIsFullScreen = false;

// entry-point function
int main(int argc, char* argv[])
{
	// function declarations
	void initialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My Inititals: Sachin Hawale");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	return(0);
}

void initialize(void)
{
	// code
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void resize(int width, int height)
{
	//code
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
}

void display(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glLineWidth(10.0f); // Set line width for better visibility

	
	
	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 0.0f, 1.0f); // Set color to white

	// Draw the letter "H"
	//glVertex2f(-0.2f, 0.5f);
	//glVertex2f(-0.8f, 0.5f);
	//glVertex2f(-0.8f, -0.1f);
	//glVertex2f(-0.2f, -0.1f);
	//glVertex2f(-0.2f, -0.7f);
	//glVertex2f(-0.8f, -0.7f);
	
	glEnd();

	glBegin(GL_LINE_STRIP);

	glColor3f(1.0f, 0.0f, 1.0f); // Set color to white

	// Draw the letter "L"
	glVertex2f(-0.0f, 0.5f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(-0.0f, -0.1f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.6f, -0.7f);


	glEnd();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	// code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bIsFullScreen == false)
		{
			glutFullScreen();
			bIsFullScreen = true;
		}
		else
		{
			glutLeaveFullScreen();
			bIsFullScreen = false;
			break;
		}
	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	// code
	switch (button)
	{
	case GLUT_RIGHT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize(void)
{
	// code
}
