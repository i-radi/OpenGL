#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>

void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    //M character
    glBegin(GL_QUADS);
    glVertex2f(.3,.1);
    glVertex2f(.2,.1);
    glVertex2f(.2,.8);
    glVertex2f(.3,.8);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(.3,.8);
    glVertex2f(.5,.6);
    glVertex2f(.5,.45);
    glVertex2f(.3,.65);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(.7,.8);
    glVertex2f(.5,.6);
    glVertex2f(.5,.45);
    glVertex2f(.7,.65);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(.7,.1);
    glVertex2f(.8,.1);
    glVertex2f(.8,.8);
    glVertex2f(.7,.8);
    glEnd();

    //I character
    glBegin(GL_QUADS);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,.2);
    glVertex2f(-.7,.2);
    glVertex2f(-.7,.1);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.4,.2);
    glVertex2f(-.4,.7);
    glVertex2f(-.5,.7);
    glVertex2f(-.5,.2);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.2,.7);
    glVertex2f(-.2,.8);
    glVertex2f(-.7,.8);
    glVertex2f(-.7,.7);
    glEnd();

    //Number 3
    glColor3f(.2,.2,1);
    glBegin(GL_LINE_LOOP);
    glVertex2f(.3,-.1);
    glVertex2f(.7,-.1);
    glVertex2f(.7,-.8);
    glVertex2f(.3,-.8);
    glVertex2f(.3,-.7);
    glVertex2f(.6,-.7);
    glVertex2f(.6,-.5);
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.4);
    glVertex2f(.6,-.4);
    glVertex2f(.6,-.2);
    glVertex2f(.3,-.2);
    glEnd();

    //Number 9
    glBegin(GL_LINE_LOOP);
    glVertex2f(-.2,-.1);
    glVertex2f(-.2,-.8);
    glVertex2f(-.6,-.8);
    glVertex2f(-.6,-.7);
    glVertex2f(-.3,-.7);
    glVertex2f(-.3,-.5);
    glVertex2f(-.6,-.5);
    glVertex2f(-.6,-.1);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,-.4);
    glVertex2f(-.5,-.4);
    glVertex2f(-.5,-.2);
    glEnd();

    glFlush();
}

void main(int argc, char** argv)
{
    glutInit(&argc, argv);
    int mode = GLUT_RGB|GLUT_SINGLE;
    glutInitDisplayMode( mode );
    glutInitWindowPosition(300,100);
    glutInitWindowSize( 600,600 );
    glutCreateWindow( "2D Draw " );
    glutDisplayFunc( Display );
    glutMainLoop();
}
