// OpenGL_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GL/glut.h>

using namespace std;
void init() {
    return;
}
void myDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
    glEnd();
    glFlush();
}
int main(int argc, char ** argv)
{
    glutCreateWindow("Simple Square");
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}

