// OpenGL_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GL/glut.h>

using namespace std;
void init() {
    return;
}
void display() {
    glClearColor(21 / 255.0, 239 / 255.0, 116/ 255.0, 0.81);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(0, 1);
        glVertex2f(1, 0.5);
        glVertex2f(1, 1.5);
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

