#include<GL/glut.h>
void display()
{ 
 glClear(GL_COLOR_BUFFER_BIT);
 
 glBegin(GL_LINES);
 glColor3f(0,0,0);
 
 glVertex2f(200,250);
 glVertex2f(250,400);
 
 glVertex2f(150,250);
 glVertex2f(250,350);
 
 glVertex2f(100,250);
 glVertex2f(250,300);
 
 glVertex2f(250,400);
 glVertex2f(300,250);

 glVertex2f(250,350);
 glVertex2f(350,250);
 
 glVertex2f(250,300);
 glVertex2f(400,250);
 
 glVertex2f(250,100);
 glVertex2f(200,250);

 glVertex2f(250,150);
 glVertex2f(150,250);
 
 glVertex2f(250,200);
 glVertex2f(100,250);
 
 glVertex2f(250,100);
 glVertex2f(300,250);
 
 glVertex2f(250,150);
 glVertex2f(350,250);
 
 glVertex2f(250,200);
 glVertex2f(400,250);
 
 glVertex2f(250,400);
 glVertex2f(250,100);
 
 glVertex2f(100,250);
 glVertex2f(400,250);
 
 
 glEnd();
 
 glBegin(GL_TRIANGLES);
 glColor3f(0,0,0);
 //second quadrant
 glVertex2f(250,400);
 glVertex2f(250,350);
 glVertex2f(225,325);
 
 glVertex2f(225,325);
 glVertex2f(425.0/2,575.0/2);
 glVertex2f(175,275);
 
 glVertex2f(175,275);
 glVertex2f(150,250);
 glVertex2f(100,250);
 //end
 //4th quadrant
 glVertex2f(400,250);
 glVertex2f(350,250);
 glVertex2f(325,225);
 
 glVertex2f(325,225);
 glVertex2f(575.0/2,425.0/2);
 glVertex2f(275,175);
 
 glVertex2f(275,175);
 glVertex2f(250,100);
 glVertex2f(250,150);
 glEnd();

 glBegin(GL_QUADS);
 glColor3f(0,0,0);
 
 glVertex2f(425.0/2,575.0/2);
 glVertex2f(250,300);
 glVertex2f(250,250);
 glVertex2f(200,250);
 
 glVertex2f(250,350);
 glVertex2f(250,300);
 glVertex2f(575.0/2,575.0/2);
 glVertex2f(275,325);
 
 glVertex2f(575.0/2,575.0/2);
 glVertex2f(300,250);
 glVertex2f(350,250);
 glVertex2f(325,275);
 
 glVertex2f(250,250);
 glVertex2f(250,200);
 glVertex2f(575.0/2,425.0/2);
 glVertex2f(300,250);
 
 glVertex2f(150,250);
 glVertex2f(200,250);
 glVertex2f(425.0/2,425.0/2);
 glVertex2f(175,225);
 
 glVertex2f(425.0/2,425.0/2);
 glVertex2f(250,200);
 glVertex2f(250,150);
 glVertex2f(225,175);
  
 glEnd();
 glFlush();
}
void myinit()
{
 glClearColor(1,1,1,1);
 gluOrtho2D(0,500,0,500);
}
int main(int argc, char *argv[])
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(700,700);
 glutInitWindowPosition(0,0);
 glutCreateWindow("Testing");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
}
