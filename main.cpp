#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(320,220);
glVertex2i(480,320);
glVertex2i(400,480);
glVertex2i(240,480);
glVertex2i(160,320);

glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(70,40);
glVertex2i(160,320);
glVertex2i(320,220);

glVertex2i(320,220);
glVertex2i(570,40);
glVertex2i(480,320);

glVertex2i(480,320);
glVertex2i(400,480);
glVertex2i(640,480);

glVertex2i(160,320);
glVertex2i(0,480);
glVertex2i(240,480);


glVertex2i(240,480);
glVertex2i(400,480);
glVertex2i(320,700);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 700.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
