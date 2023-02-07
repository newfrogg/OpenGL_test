// OpenGL_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Reference
https://www.opengl.org/resources/libraries/glut/spec3/node1.html
*/

#include <iostream>
#include <GL/glut.h>

using namespace std;
void init() {
    glColor3f(0, 0, 1);
    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(left, right, bottom, top, near, far)
    glOrtho(-5.0, 5.0, -5.0, 5.0, -1.0, 1.0);
    return;
}
void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
        glVertex2f(-2.0, 0.0);
        glVertex2f(-2.0, 2.0);
        glVertex2f(0.0, 2.0);
        glVertex2f(0.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.0, -4.0);
        glVertex2f(2.0, 0.0);
        glVertex2f(4.0, -4.0);
    glEnd();

    glFlush();
}
int main(int argc, char ** argv)
{
    //Init Library
    glutInit(&argc, argv);
    //Setting Display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    //Create Window for display
    glutCreateWindow("simple window");
    //Setting position to display
    glutInitWindowPosition(0, 0);
    //Setting window sizes
    glutInitWindowSize(500, 500);
    //Setup <display> as callback for display event
    glutDisplayFunc(display); 
    //Set OpenGL state (user-defined)
    init();
    //Create events loop
    glutMainLoop();

    return 0;
}

