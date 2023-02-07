// OpenGL_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GL/glut.h>
#include <math.h>
GLfloat angle;
#define DEG2RAD (3.14159f / 180.0f)

using namespace std;
void init() {
	return;
}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);

	GLfloat *c = new GLfloat[2];
	c[0] = 0.5 * cos(DEG2RAD * angle);
	c[1] = 0.5 * sin(DEG2RAD * angle);
	glBegin(GL_POLYGON);
		glVertex2f(c[0] - 0.5, c[1] - 0.5);
		glVertex2f(c[0] - 0.5, c[1] + 0.5);
		glVertex2f(c[0] + 0.5, c[1] + 0.5);
		glVertex2f(c[0] + 0.5, c[1] - 0.5);
	glEnd();
	glFlush();
	glutSwapBuffers();
}
void processTimer(int val) {
	angle += (GLfloat)val;
	if (angle > 360) angle -= 360.0f;
	glutTimerFunc(100, processTimer, 10);
	//Request for re display (glutDisplayFunc)
	glutPostRedisplay();

}
int main(int argc, char** argv)
{
	angle = 0.0f;
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Dynamic Square");
	glutDisplayFunc(myDisplay);
	//Event triggered by timing (periodically)
	glutTimerFunc(100, processTimer, 10);
	glutMainLoop();

	return 0;
}

