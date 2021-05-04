#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>

void DrawStraightQuad(float x1,float x2,float y1,float y2);
void DrawQuad(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4);

void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    //shadow of M character
    glColor3f(.7,0,0);
    DrawStraightQuad(.8,.82,.08,.8);
    DrawStraightQuad(.8,.7,.1,.08);
    DrawStraightQuad(.2,.3,.1,.08);
    DrawStraightQuad(.3,.32,.08,.65);
    DrawQuad(.7,.7,.52,.5,.65,.63,.45,.45);
    DrawQuad(.55,.55,.32,.3,.55,.57,.8,.8);

    //shadow of I character
    DrawStraightQuad(-.2,-.7,.1,.08);
    DrawStraightQuad(-.2,-.18,.08,.2);
    DrawStraightQuad(-.4,-.38,.2,.7);
    DrawStraightQuad(-.2,-.18,.68,.8);
    DrawStraightQuad(-.2,-.4,.7,.68);
    DrawStraightQuad(-.5,-.7,.7,.68);

    //shadow of Number 3
    glColor3f(.2,.2,.8);
    DrawStraightQuad(.7,.72,-.1,-.82);
    DrawStraightQuad(.7,.3,-.8,-.82);
    DrawStraightQuad(.6,.3,-.5,-.52);
    DrawStraightQuad(.6,.3,-.2,-.22);

    //shadow of Number 9
    DrawStraightQuad(-.2,-.18,-.1,-.82);
    DrawStraightQuad(-.2,-.6,-.8,-.82);
    DrawStraightQuad(-.3,-.6,-.5,-.52);
    DrawStraightQuad(-.3,-.5,-.2,-.22);
    DrawStraightQuad(-.5,-.48,-.2,-.4);

    //M character
    glColor3f(1,0,0);
    DrawStraightQuad(.3,.2,.1,.8);
    DrawQuad(.3,.5,.5,.3,.8,.6,.45,.65);
    DrawQuad(.7,.5,.5,.7,.8,.6,.45,.65);
    DrawStraightQuad(.7,.8,.1,.8);

    //I character
    DrawStraightQuad(-.2,-.7,.2,.1);
    DrawStraightQuad(-.4,-.5,.2,.7);
    DrawStraightQuad(-.2,-.7,.8,.7);

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
    glutCreateWindow( "3D Draw " );
    glutDisplayFunc( Display );
    glutMainLoop();
}

void DrawStraightQuad(float x1,float x2,float y1,float y2)
{
    glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y1);
    glVertex2f(x2,y2);
    glVertex2f(x1,y2);
    glEnd();
}

void DrawQuad(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4)
{
    glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glVertex2f(x4,y4);
    glEnd();
}
