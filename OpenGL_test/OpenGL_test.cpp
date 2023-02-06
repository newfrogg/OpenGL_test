// OpenGL_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GL/glut.h>

using namespace std;
void init() {
    glColor3f(0, 0, 1);
    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(left, right, bottom, top, near, far)
    glOrtho(-2.0, 4.0, -4.0, 2.0, -1.0, 1.0);

    return;
}
void drawFigure() {
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
}
void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    //glViewport(x, y, w, h)
    glViewport(320, 240, 320, 240);
    drawFigure();

    glViewport(0, 0, 320, 240);
    drawFigure();

    glViewport(0, 240, 320, 240);
    drawFigure();

    glViewport(320, 0, 320, 240);
    drawFigure();

    glFlush();
}
int main(int argc, char ** argv)
{
    //Init Library
    glutInit(&argc, argv);
    //Setting Display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    //Setting position to display
    glutInitWindowPosition(0, 0);
    //Setting window sizes
    glutInitWindowSize(640, 480);

    //Setup <display> as callback for display event
    //Create Window for display
    glutCreateWindow("simple window");
    glutDisplayFunc(display); 
    //Set OpenGL state (user-defined)
    init();
    //Create events loop
    glutMainLoop();

    return 0;
}

