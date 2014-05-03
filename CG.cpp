#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<unistd.h>

//Bubble Sort

#define MAX 5
int k=0;
// Icon 2 Working
void *currentfont;     
void setFont(void *font)
{ 
   currentfont=font;
}
     
void drawstring(float x,float y,float z,char *str)
{       
    char *c;
    glRasterPos3f(x,y,z);
    for(c=str;*c!='\0';c++)
    {      
     glColor3f(0.0,0.0,0.0);
     glutBitmapCharacter(currentfont,*c);
    }
}
// Google Search Code
void googlesearchtext() // text in the search space
{
        setFont(GLUT_BITMAP_HELVETICA_12);
        glColor3f(0.0,0.0,0.0);
         drawstring(155.0,260.0,1.0,"How Does GOOGLE Work ??? ");
        glFlush();
}
void googletext() //to display google
{
        setFont(GLUT_BITMAP_TIMES_ROMAN_24);
        glColor3f(0.0,0.0,1.0);
        drawstring(190.0,300.0,1.0," G ");
        
        glColor3f(1.0,0.0,0.0);
        drawstring(210.0,300.0,1.0," o ");
        
        glColor3f(1.0,1.0,0.0);
        drawstring(230.0,300.0,1.0," o ");
        
        glColor3f(0.0,0.0,1.0);
        drawstring(250.0,300.0,1.0," g ");
        
        glColor3f(0.0,1.0,0.0);
        drawstring(270.0,300.0,1.0," l ");
        
        glColor3f(1.0,0.0,0.0);
        drawstring(290.0,300.0,1.0," e ");
        
        setFont(GLUT_BITMAP_HELVETICA_10);
        glColor3f(0,0,0);
        drawstring(186.0,225.0,1.0,"Google search");
        
        drawstring(276.0,225.0,1.0,"I'm feeling Lucky");
        glFlush();
        sleep(1);
        googlesearchtext();
               
}
void zoomgoogle() //google Zoom
{
         glClear(GL_COLOR_BUFFER_BIT);
         glBegin(GL_QUADS);
         glColor3f(0.85,0.85,0.85);
         glVertex2f(100,100);
         glVertex2f(400,100);
         glVertex2f(400,400);
         glVertex2f(100,400);
         glEnd();
         
         glBegin(GL_LINE_LOOP);
         glColor3f(0,0,1);
         glVertex2f(150,253);
         glVertex2f(150,273);
         glVertex2f(340,273);
         glVertex2f(340,253 );
         glEnd();
         
         glBegin(GL_QUADS);
         glColor3f(0.70,0.70,0.70);
         glVertex2f(175,220);
         glVertex2f(175,235);
         glVertex2f(225,235);
         glVertex2f(225,220);
         glEnd();
         
         glBegin(GL_QUADS);
         glColor3f(0.70,0.70,0.70);
         glVertex2f(265,220);
         glVertex2f(265,235);
         glVertex2f(315,235);
         glVertex2f(315,220);
         glEnd();
         glFlush();
         googletext();
}
void google()
{
        sleep(1);
        zoomgoogle();
}
void display2()
{
         float i,j;
         glClear(GL_COLOR_BUFFER_BIT);//outer box
         glColor3f(0.45,0.45,0.45);
         glBegin(GL_QUADS);
         glVertex2f(360,200);
         glVertex2f(400,200);
         glVertex2f(400,240);
         glVertex2f(360,240);
         glEnd();
         
         glColor3f(0,0,0);//inner box
         glBegin(GL_QUADS);
         glVertex2f(365,205);
         glVertex2f(395,205);
         glVertex2f(395,235);
         glVertex2f(365,235);
         glEnd();
         
         glBegin(GL_QUADS);//keyboard
         glColor3f(0.35,0.65,0.65);
         glVertex2f(355,190);
         glVertex2f(405,190);
         glVertex2f(400,180);
         glVertex2f(350,180);
         glEnd();
         
         glBegin(GL_QUADS);//CPU
         glColor3f(0.3,0.3,0.3);
         glVertex2f(410,240);
         glVertex2f(425,240);
         glVertex2f(425,180);
         glVertex2f(410,180);
         glEnd();
         
         glBegin(GL_POINTS);//power button
         glColor3f(0,0,1);
         glVertex2f(417,200);
         glColor3f(1,0,0);
         glVertex2f(417,195);
         glColor3f(0,1,0);
         glVertex2f(423,220);
         glEnd();
         
         glBegin(GL_LINE_STRIP);//cd drive
         glColor3f(0,0,0);
         glVertex2f(412,225);
         glVertex2f(423,225);
         glVertex2f(423,230);
         glVertex2f(412,230);
         glVertex2f(412,225);
         glEnd();
         
         glColor3f(1,1,1);//base
         glBegin(GL_QUADS);
         glVertex2f(371,200);
         glVertex2f(390,200);
         glVertex2f(390,190);
         glVertex2f(371,190);
         glEnd();
         glFlush();
         for(i=0;i<230;i=i+1) 
         {  
                glBegin(GL_QUADS);
                glColor3f(1,1,1);              
                glColor3f(1,0,0);
                        glVertex2i(50+i,95);
                        glVertex2i(50+i,195);
                        glVertex2i(90+i,195);
                        glVertex2i(90+i,95); //body
                glColor3f(1,0.5,0);
                        glVertex2i(62+i,195);
                        glVertex2i(78+i,195);
                        glVertex2i(78+i,210);
                        glVertex2i(62+i,210); //neck 
                               
                        glVertex2i(50+i,210);
                        glVertex2i(90+i,210);
                        glVertex2i(90+i,240);
                        glVertex2i(50+i,240); //head  
                              	      
                        glVertex2i(75+i,175);
                        glVertex2i(75+i,185);
                        glVertex2i(145+i,175);
                        glVertex2i(143+i,165); //hand 
                        
                        glVertex2i(145+i,176);
                        glVertex2i(145+i,172);
                        glVertex2i(150+i,176);
                        glVertex2i(150+i,172);//fingers
                                               
                        glVertex2i(63+i,95);
                        glVertex2i(78+i,95);
                        glVertex2i(78+i,35);
                        glVertex2i(63+i,35); //leg 
                         
                        glColor3f(0.60,0.40,0.70);     
                        glVertex2i(63+i,35);
                        glVertex2i(88+i,35);
                        glVertex2i(88+i,20);
                        glVertex2i(63+i,20); //feet
                glEnd();
                
                glBegin(GL_TRIANGLES);
                glColor3f(0.60,0.40,0.70);
                        glVertex2i(88+i,35);
                        glVertex2i(88+i,20);
                        glVertex2i(94+i,20); //toes
                        
                glColor3f(0,0,0);
                        glVertex2i(75+i,230);
                        glVertex2i(90+i,230);
                        glVertex2i(90+i,235); //eye brows
                                
                        glVertex2i(80+i,223);
                        glVertex2i(90+i,223);
                        glVertex2i(85+i,228); //eyes
                        
                glEnd();
                glFlush();
                      
              glBegin(GL_QUADS);
              glColor3f(0,0,0);   // to remove traces create movement of frame in black
	                glVertex2i(50-40+i,95);
	                glVertex2i(50-40+i,195);
	                glVertex2i(90-40+i,195);
	                glVertex2i(90-40+i,95);

	                glVertex2i(62-17+i,195);
	                glVertex2i(78-17+i,195);
	                glVertex2i(78-17+i,210);
	                glVertex2i(62-17+i,210);

	                glVertex2i(50-40+i,210);
	                glVertex2i(90-40+i,210);
	                glVertex2i(90-40+i,240);
	                glVertex2i(50-40+i,240);

	                glVertex2i(63-15+i,95);
	                glVertex2i(78-15+i,95);
	                glVertex2i(78-15+i,35);
	                glVertex2i(63-15+i,35);

	                glVertex2i(63-25+i,35);
	                glVertex2i(88-25+i,35);
	                glVertex2i(88-25+i,20);
	                glVertex2i(63-25+i,20);	  
	               
                                      
              glEnd();
              
              glBegin(GL_TRIANGLES);
                        glVertex2i(88-35+i,35);
                        glVertex2i(88-35+i,20);
                        glVertex2i(94-35+i,20);
              glEnd();
              glFlush();
	  }
	google();
}
void howsearchworks() //after clicking Google Search
{
         glClear(GL_COLOR_BUFFER_BIT);
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);         
         glColor3f(1,1,1);
         drawstring(190,300,1.0,"HOW SEARCH WORKS");
         
         setFont(GLUT_BITMAP_HELVETICA_18);         
         glColor3f(1,1,1);
         drawstring(195,270,1.0,"From Algorithms to Answers.");
 
         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0.60,0.40,0.70);
         drawstring(300,150,1.0,"Press 1 to Continue.");
         
         glFlush();
}

void howsearchworks1() // 60 Trillion
{
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(0.65,0.85,0.85);
         glBegin(GL_QUADS);
         glVertex2f(0,500);
         glVertex2f(250,500);
         glVertex2f(250,250);
         glVertex2f(0,250);
         glEnd();
         glFlush();
         
         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0,0,0);
         drawstring(45,420,1.0,"SEARCH STARTS WITH THE WEB. IT'S MADE UP OF OVER");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,0,0);
         drawstring(100,380,1.0,"60");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,0,0);
         drawstring(85,360,1.0,"TRILLION");

         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(1,1,0);
         drawstring(80,330,1.0,"Individual Pages");
         
         setFont(GLUT_BITMAP_9_BY_15);
         glColor3f(1,0,0);
         drawstring(65,320,1.0,"And its constantly growing.");

         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0.60,0.40,0.70);
         drawstring(200,300,1.0,"Press 2 to Continue.");
         
         glFlush();
}

void howsearchworks2() //crawling
{
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(0,500);
         glVertex2f(250,500);
         glVertex2f(250,250);
         glVertex2f(0,250);
         glEnd();
         glFlush();
         
         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0,0,0);
         drawstring(45,420,1.0,"SEARCH STARTS WITH THE WEB. IT'S MADE UP OF OVER");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,1,1);
         drawstring(100,380,1.0,"60");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,1,1);
         drawstring(85,360,1.0,"TRILLION");

         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(1,1,1);
         drawstring(80,330,1.0,"Individual Pages");
         
         setFont(GLUT_BITMAP_9_BY_15);
         glColor3f(1,1,1);
         drawstring(65,320,1.0,"And its constantly growing.");

         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0,0,0);
         drawstring(200,300,1.0,"Press 2 to Continue.");
         glFlush();
          
         glColor3f(0.65,0.85,0.85);
         glBegin(GL_QUADS);
         glVertex2f(250,500);
         glVertex2f(500,500);
         glVertex2f(500,250);
         glVertex2f(250,250);
         glEnd();
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_HELVETICA_18);
         drawstring(341,455,1.0,"Google Navigates the Web by");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,0,0);
         drawstring(340,410,1.0,"C");
         
         glColor3f(1,0,0);
         drawstring(340,395,1.0,"R");
         
         glColor3f(1,0,0);         
         drawstring(340,380,1.0,"A");
         
         glColor3f(1,0,0);
         drawstring(340,365,1.0,"W");
         
         glColor3f(1,0,0);
         drawstring(340,350,1.0,"L");
         
         glColor3f(1,0,0);
         drawstring(340,335,1.0,"I");
         
         glColor3f(1,0,0);
         drawstring(340,320,1.0,"N");
         
         glColor3f(1,0,0);
         drawstring(340,305,1.0,"G");
          
         setFont(GLUT_BITMAP_9_BY_15);
         glColor3f(0,0,0);
         drawstring(400,390,1.0,"That means,");
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,380,1.0,"It follows links from");
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,370,1.0,"page to page");
         
         glColor3f(0,0,1);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,350,1.0,"site owners choose");
         
         glColor3f(0,0,1);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,340,1.0,"whether their sites");
         
         glColor3f(0,0,1);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,330,1.0,"are crawled");
         
         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0.60,0.40,0.70);
         drawstring(420,290,1.0,"Press 3 to Continue.");
         glFlush();
}

void howsearchworks3() //Index
{
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(250,500);
         glVertex2f(500,500);
         glVertex2f(500,250);
         glVertex2f(250,250);
         glEnd();
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_HELVETICA_18);
         drawstring(341,455,1.0,"Google Navigates the Web by");
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         
         glColor3f(1,1,1);
         drawstring(340,410,1.0,"C");
         
         glColor3f(1,1,1);
         drawstring(340,395,1.0,"R");
         
         glColor3f(1,1,1);
         drawstring(340,380,1.0,"A");
         
         glColor3f(1,1,1);
         drawstring(340,365,1.0,"W");
         
         glColor3f(1,1,1);
         drawstring(340,350,1.0,"L");
         
         glColor3f(1,1,1);
         drawstring(340,335,1.0,"I");
         
         glColor3f(1,1,1);
         drawstring(340,320,1.0,"N");
         
         glColor3f(1,1,1);
         drawstring(340,305,1.0,"G");
         setFont(GLUT_BITMAP_9_BY_15);
         
         glColor3f(1,1,1);
         drawstring(400,390,1.0,"That means,");
         
         glColor3f(1,1,1);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,380,1.0,"It follows links from");
         
         glColor3f(1,1,1);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,370,1.0,"page to page");
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,350,1.0,"site owners choose");
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,340,1.0,"whether their sites");
         
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,330,1.0,"are crawled");
         
         glColor3f(0.60,0.40,0.70);
         setFont(GLUT_BITMAP_HELVETICA_12);
         drawstring(420,290,1.0,"Press 3 to Continue.");

         glColor3f(0.45,0.45,0.85);
         glBegin(GL_QUADS);
         glVertex2f(250,250);
         glVertex2f(500,250);
         glVertex2f(500,0);
         glVertex2f(250,0);
         glEnd();
         
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0,0,0);
         drawstring(320,215,1.0,"And it keeps track of it all in . . .");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,0,0);
         drawstring(295,150,1.0,"THE");
          
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(0,1,0);
         drawstring(320,150,1.0,"I");
         
         glColor3f(0,1,0);
         drawstring(330,135,1.0,"N");
         
         glColor3f(0,1,0);
         drawstring(340,120,1.0,"D");
         
         glColor3f(0,1,0);
         drawstring(350,105,1.0,"E");
         
         glColor3f(0,1,0);
         drawstring(360,90,1.0,"X");
          
         setFont(GLUT_BITMAP_9_BY_15);
         glColor3f(0,0,0);
         drawstring(400,150,1.0,"The Index is over");
         
         glColor3f(0,0,0);
         drawstring(400,130,1.0,"100 MILLION Gigabytes");
         glFlush();                  
}
    
void myInit()
{       
        glClearColor(0.0,0.0,0.0,0.0);
        glColor3f(0.0f,0.0f,0.0f);
        glPointSize(4.0);
        glLineWidth(2.0);
        gluOrtho2D(0.0,500.0,0.0,500.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        setFont(GLUT_BITMAP_HELVETICA_18);
}
    
void draw_key_int(void)                         // text for keyboard interaction
{
        glColor3f(0.0,0.0,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(0,135);
        glVertex2f(500,135);
        glVertex2f(500,0);
        glEnd();

        glColor3f(0.0f,1.0f,1.0f);
        setFont(GLUT_BITMAP_HELVETICA_18);
        drawstring(360.0,100.0,1.0,"DO U WISH TO CONTINUE?");
        glColor3f(0.0f,1.0f,1.0f);
        drawstring(360.0,80.0,1.0,"PRESS  Y/N");
        glFlush();
}
     
void text(void)                                                                                 // to draw the text in menu screen
{
        setFont(GLUT_BITMAP_HELVETICA_18);
        
        glColor3f(1.0,1.0,1.0);
        drawstring(200.0,355.0,1.0,"           GRAPHICAL SYSTEM");                             
        
        glColor3f(1.0,1.0,1.0);
        drawstring(235.0,250.0,1.0,"    Loading...");
        
        glColor3f(1.0,1.0,1.0);
        drawstring(360.0,80.0,1.0,"            Press P to proceed");
        glFlush();
}
     
void desktop(void)    
{    
        glClear(GL_COLOR_BUFFER_BIT);
         
        glBegin(GL_LINES);
        glColor3f(1,0,0);
         
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
        glColor3f(1,1,1);
        glVertex2f(250,400);
        glVertex2f(250,350);
        glVertex2f(225,325);
         
        glVertex2f(225,325);
        glVertex2f(425.0/2,575.0/2);
        glVertex2f(175,275);
         
        glVertex2f(175,275);
        glVertex2f(150,250);
        glVertex2f(100,250);

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
        glColor3f(1,1,1);
         
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
                  // Code for the icons on the Desktop
        glBegin(GL_POLYGON);
        glColor3f(0.7f,0.2f,0.2f);
        glVertex2i(60.0,380.0);
        glVertex2i(30.0,380.0);
        glVertex2i(30.0,350.0);
        glVertex2i(60.0,350.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.7f,0.2f,0.2f);
        glVertex2i(60.0,300.0);
        glVertex2i(30.0,300.0);
        glVertex2i(30.0,270.0);
        glVertex2i(60.0,270.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.7f,0.2f,0.2f);
        glVertex2i(60.0,220.0);
        glVertex2i(30.0,220.0);
        glVertex2i(30.0,190.0);
        glVertex2i(60.0,190.0);
        glEnd();
        glFlush();    
}
     
     
void draw() // TO DRAW POLYGON FOR LOADING
{
            glClear(GL_COLOR_BUFFER_BIT);
            glBegin(GL_POLYGON);  
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2i(280,275);
            glVertex2i(200,275);
            glVertex2i(200,280);
            glVertex2i(280,280);   
            glEnd();

            glBegin(GL_POLYGON);  
            glColor3f(0.3f,0.4f,0.5f);
            glVertex2i(300,275);
            glVertex2i(285,275);
            glVertex2i(285,280);
            glVertex2i(300,280);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.1f,0.4f,0.9f);
            glVertex2i(320,275);
            glVertex2i(305,275);
            glVertex2i(305,280);
            glVertex2i(320,280);
            glEnd();
            glFlush();
     
}

    
     
void title()                                                                                            // to draw the starting screen
{       
            glClear(GL_COLOR_BUFFER_BIT);
            setFont(GLUT_BITMAP_HELVETICA_18);
            glColor3f(1.0,1.0,1.0);
            drawstring(55.0,435.0,1.0,"                                                     \"Graphical Implementation Of System User Interface\"");
            glColor3f(1.0,1.0,1.0);
            drawstring(210.0,365.0,1.0,"SUBMITTED   BY");                          
            glColor3f(1.0,1.0,0.0);
            drawstring(150.0,340.0,1.0," ABHIJITH M                                            1BY11CS001");
            glColor3f(1.0,1.0,0.0);
            drawstring(150.0,300.0,1.0," N S ANUP BHARADWAJ                         1BY11CS039");
            glColor3f(1.0,1.0,1.0);
            drawstring(195.0,240.0,1.0,"UNDER THE GUIDANCE OF");
            glColor3f(1.0,1.0,0.0);
            drawstring(140.0,200.0,1.0," Mr. Muneshwara M S                                 Ms. Ambika G N ");
            setFont(GLUT_BITMAP_HELVETICA_12);
            glColor3f(1.0,0.0,1.0);
            drawstring(130.0,180.0,1.0,"                  Assistant Professor                                                   Assistant Professor");
            glColor3f(1.0,0.0,1.0);
            drawstring(130.0,160.0,1.0,"                     Dept. of CSE                                                            Dept. of CSE");
            glColor3f(1.0,0.0,1.0);
            drawstring(140.0,140.0,1.0,"                    BMSIT                                                                      BMSIT");
            draw_key_int();
            glFlush();
}  

void conversation()
{       
         float i,j;
         glClear(GL_COLOR_BUFFER_BIT);//outer box
         
         glBegin(GL_LINES);
         glColor3f(0,0,0);
         glVertex2f(0,50);
         glVertex2f(470,50);
        
         glVertex2f(470,50);
         glVertex2f(470,500);
         
         glVertex2f(470,50);
         glVertex2f(500,0);
         glEnd();
         glFlush();      
         
         glBegin(GL_QUADS);
         glColor3f(1,1,1);
         glVertex2f(475,350);
         glVertex2f(495,300);
         glVertex2f(495,350);
         glVertex2f(475,400);
         glEnd();
         glFlush();
         
         for(i=0;i<100;i=i+1) 
         {  
                        
                        //MAN 1
                        glBegin(GL_QUADS);
                        glColor3f(0.45,0.45,0.45);         
                        glVertex2i(50+50+i,95);
                        glVertex2i(50+50+i,195);
                        glVertex2i(90+50+i,195);
                        glVertex2i(90+50+i,95); //body
                        
                        glColor3f(1,0.5,0);
                        glVertex2i(62+50+i,195);
                        glVertex2i(78+50+i,195);
                        glVertex2i(78+50+i,210);
                        glVertex2i(62+50+i,210); //neck 
                               
                        glVertex2i(50+50+i,210);
                        glVertex2i(90+50+i,210);
                        glVertex2i(90+50+i,240);
                        glVertex2i(50+50+i,240); //head  
                              	      
                        glVertex2i(75+40+i,175);
                        glVertex2i(75+40+i,115);
                        glVertex2i(85+40+i,115);
                        glVertex2i(85+40+i,175); //hand 
                        
                        glVertex2i(115+i,115);
                        glVertex2i(117+i,115);
                        glVertex2i(117+i,107);
                        glVertex2i(115+i,107);
                        
                        glVertex2i(118+i,115);
                        glVertex2i(120+i,115);
                        glVertex2i(120+i,106);
                        glVertex2i(118+i,106);
                        
                        glVertex2i(121+i,115);
                        glVertex2i(123+i,115);
                        glVertex2i(123+i,105);
                        glVertex2i(121+i,105);

                        glVertex2i(124+i,115);
                        glVertex2i(125+i,115);
                        glVertex2i(125+i,106);
                        glVertex2i(124+i,106);                        
                        //fingers
                        
                        glVertex2i(63+50+i,95);
                        glVertex2i(78+50+i,95);
                        glVertex2i(78+50+i,35);
                        glVertex2i(63+50+i,35); //leg 
                         
                        glColor3f(0.60,0.40,0.70);     
                        glVertex2i(63+50+i,35);
                        glVertex2i(88+50+i,35);
                        glVertex2i(88+50+i,20);
                        glVertex2i(63+50+i,20); //feet
                        glEnd();
                        
                        glBegin(GL_TRIANGLES);
                        glColor3f(0,0,0);
                        glVertex2i(75+50+i,230);
                        glVertex2i(90+50+i,230);
                        glVertex2i(90+50+i,235); //eye brows
                                
                        glVertex2i(80+50+i,223);
                        glVertex2i(90+50+i,223);
                        glVertex2i(85+50+i,228); //eyes
                        glEnd();
                        glFlush();//finish
                        
                        
                        
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);         
                        glVertex2i(60+i,95);
                        glVertex2i(60+i,195);
                        glVertex2i(100+i,195);
                        glVertex2i(100+i,95); //body
                        
                        glColor3f(0.1,0.2,0.4);
                        glVertex2i(97+i,195);
                        glVertex2i(113+i,195);
                        glVertex2i(113+i,210);
                        glVertex2i(97+i,210); //neck 
                               
                        glVertex2i(60+i,210);
                        glVertex2i(100+i,210);
                        glVertex2i(100+i,240);
                        glVertex2i(60+i,240); //head  
                              	      
                        glVertex2i(85+i,175);
                        glVertex2i(85+i,115);
                        glVertex2i(95+i,115);
                        glVertex2i(95+i,175); //hand 
                        
                        glVertex2i(85+i,115);
                        glVertex2i(87+i,115);
                        glVertex2i(87+i,107);
                        glVertex2i(85+i,107);
                        
                        glVertex2i(88+i,115);
                        glVertex2i(90+i,115);
                        glVertex2i(90+i,106);
                        glVertex2i(88+i,106);
                        
                        glVertex2i(91+i,115);
                        glVertex2i(93+i,115);
                        glVertex2i(93+i,105);
                        glVertex2i(91+i,105);

                        glVertex2i(94+i,115);
                        glVertex2i(95+i,115);
                        glVertex2i(95+i,106);
                        glVertex2i(94+i,106);                        
                        //fingers
                        
                        glVertex2i(98+i,95);
                        glVertex2i(113+i,95);
                        glVertex2i(113+i,35);
                        glVertex2i(98+i,35); //leg 
                         
                        glColor3f(0.1,0.2,0.4);     
                        glVertex2i(88+i,35);
                        glVertex2i(113+i,35);
                        glVertex2i(113+i,20);
                        glVertex2i(88+i,20); //feet
                        glEnd();
                        
                        glBegin(GL_TRIANGLES);
                        glColor3f(0,0,0);
                        glVertex2i(135+i,230);
                        glVertex2i(135+i,230);
                        glVertex2i(135+i,235); //eye brows
                                
                        glVertex2i(135+i,223);
                        glVertex2i(135+i,223);
                        glVertex2i(130+i,228); //eyes
                        glEnd();
                        glFlush();
                        
                //MAN 2 
                        glBegin(GL_QUADS);                      
                        glColor3f(0.95,0.15,0.15);         
                        glVertex2i(50+50+250,95);
                        glVertex2i(50+50+250,195);
                        glVertex2i(90+50+250,195);
                        glVertex2i(90+50+250,95); //body
                        
                        glColor3f(1,0.5,0);
                        glVertex2i(62+50+250,195);
                        glVertex2i(78+50+250,195);
                        glVertex2i(78+50+250,210);
                        glVertex2i(62+50+250,210); //neck 
                               
                        glVertex2i(50+50+250,210);
                        glVertex2i(90+50+250,210);
                        glVertex2i(90+50+250,240);
                        glVertex2i(50+50+250,240); //head  
                              	      
                        glVertex2i(75+40+250,175);
                        glVertex2i(75+40+250,115);
                        glVertex2i(85+40+250,115);
                        glVertex2i(85+40+250,175); //hand 
                        
                        glVertex2i(115+250,115);
                        glVertex2i(117+250,115);
                        glVertex2i(117+250,107);
                        glVertex2i(115+250,107);
                        
                        glVertex2i(118+250,115);
                        glVertex2i(120+250,115);
                        glVertex2i(120+250,106);
                        glVertex2i(118+250,106);
                        
                        glVertex2i(121+250,115);
                        glVertex2i(123+250,115);
                        glVertex2i(123+250,105);
                        glVertex2i(121+250,105);

                        glVertex2i(124+250,115);
                        glVertex2i(125+250,115);
                        glVertex2i(125+250,106);
                        glVertex2i(124+250,106);                        
                        //fingers
                        
                        glVertex2i(63+50+250,95);
                        glVertex2i(78+50+250,95);
                        glVertex2i(78+50+250,35);
                        glVertex2i(63+50+250,35); //leg 
                         
                        glColor3f(0.60,0.40,0.70);     
                        glVertex2i(63+50+250,35);
                        glVertex2i(88+50+250,35);
                        glVertex2i(88+50+250,20);
                        glVertex2i(63+50+250,20); //feet
                        glEnd();
                        
                        glBegin(GL_TRIANGLES);
                        glColor3f(0,0,0);
                        glVertex2i(75+50+250,230);
                        glVertex2i(90+50+250,230);
                        glVertex2i(90+50+250,235); //eye brows
                                
                        glVertex2i(80+50+250,223);
                        glVertex2i(90+50+250,223);
                        glVertex2i(85+50+250,228); //eyes
                        glEnd();
                        
                glEnd();
                glFlush();
       }  
                        sleep(1);
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2i(63+50+250,35);
                        glVertex2i(88+50+250,35);
                        glVertex2i(88+50+250,20);
                        glVertex2i(63+50+250,20);                        
                        glColor3f(0.60,0.40,0.70);     
                        glVertex2i(63+50+240,35);
                        glVertex2i(88+50+240,35);
                        glVertex2i(88+50+240,20);
                        glVertex2i(63+50+240,20); //feet
                        glEnd();                       
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,0.5,0);
                        glVertex2i(75+50+250,230);
                        glVertex2i(90+50+250,230);
                        glVertex2i(90+50+250,235); //eye brows                                
                        glVertex2i(80+50+250,223);
                        glVertex2i(90+50+250,223);
                        glVertex2i(85+50+250,228); //eyes
                        glEnd();                        
                        glBegin(GL_TRIANGLES);
                        glColor3f(0,0,0);
                        glVertex2i(75+50+225,230);
                        glVertex2i(90+50+225,230);
                        glVertex2i(90+50+225,235); //eye brows                                
                        glVertex2i(80+50+225,223);
                        glVertex2i(90+50+225,223);
                        glVertex2i(85+50+225,228); //eyes
                        glEnd();
                        glFlush();        
                        
                        //Cloud convo !!
                        glBegin(GL_QUADS);//wazzup
                        glColor3f(1,1,1);
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);
                        glEnd();                       
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(240,300,1.0,"Wazzup !!");                       
                        glFlush();                       
                        sleep(2);
                        
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);                     
                        glEnd();
                                                 
                        
                        glBegin(GL_QUADS);//thinking about someting
                        glColor3f(1,1,1);
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glFlush();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();      
                        glFlush(); 
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,300,1,"Hey, was just thinking");  
                        drawstring(280,290,1,"about something !");                      
                        glFlush();
                        sleep(3);                            
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();
                        glFlush();    
                         
                        glBegin(GL_QUADS);//Since when did you start thinking..
                        glColor3f(1,1,1);
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);
                        glEnd();                       
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(235,300,1.0,"Since when did you");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(235,290,1.0,"start thinking :D ");                     
                        glFlush();                       
                        sleep(3);                        
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);        
                        glFlush();            
                        glEnd();              
                        
                        glBegin(GL_QUADS);//Enough with the jokes,
                        glColor3f(1,1,1);
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glFlush();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();      
                        glFlush(); 
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,300,1,"Stop messing around..");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,288,1,"Lets begin this Project");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,276,1,"Already !");                     
                        glFlush();
                        sleep(4);                            
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();
                        glFlush(); 
                        
                        glBegin(GL_QUADS);//Cranky
                        glColor3f(1,1,1);
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);
                        glEnd();                       
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(235,300,1.0,"Alright ! Alright !");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(235,288,1.0,"Now don't get cranky");
                        glColor3f(0.1,0.2,0.4);
                        drawstring(235,276,1.0,"Over it !");                     
                        glFlush();                       
                        sleep(3);                        
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);        
                        glFlush();            
                        glEnd();   
                        
                        glBegin(GL_QUADS);//introduction
                        glColor3f(1,1,1);
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glFlush();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();      
                        glFlush(); 
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,300,1,"Finally !!");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,288,1,"Hello There");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(280,276,1,"I am Abhijith");                     
                        glFlush();
                        sleep(4);                            
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();
                        glFlush();
                        
                        glBegin(GL_QUADS);//Introduction
                        glColor3f(1,1,1);
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);
                        glEnd();                       
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(228,300,1.0,"And I am,");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(228,288,1.0,"Anup !");
                        glColor3f(0.1,0.2,0.4);
                        drawstring(228,276,1.0,"We are here to help"); 
                        glColor3f(0.1,0.2,0.4);
                        drawstring(228,264,1.0,"you through the Project");                    
                        glFlush();                       
                        sleep(5);                        
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(300,320);  
                        glVertex2f(300,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);        
                        glFlush();            
                        glEnd();
                        
                        glBegin(GL_QUADS);//Google
                        glColor3f(1,1,1);
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glFlush();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glColor3f(1,1,1);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);
                        glEnd();      
                        glFlush(); 
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(260,295,1,"To begin with");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(260,283,1,"We'll start with how ");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(260,271,1,"Google works");                     
                        glFlush();
                        sleep(4);                            
                        glBegin(GL_QUADS);
                        glColor3f(0.1,0.2,0.4);//clearing
                        glVertex2f(275,250);
                        glVertex2f(275,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glBegin(GL_TRIANGLES);
                        glColor3f(0.1,0.2,0.4);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glEnd();
                        glFlush();
                        
                        glBegin(GL_QUADS);//Google
                        glColor3f(1,1,1);
                        glVertex2f(225,250);
                        glVertex2f(225,320);
                        glVertex2f(350,320);  
                        glVertex2f(350,250);
                        glEnd();
                        glFlush();
                        glBegin(GL_TRIANGLES);
                        glColor3f(1,1,1);
                        glVertex2f(320,250);
                        glVertex2f(340,250);
                        glVertex2f(349,220);
                        glColor3f(1,1,1);
                        glVertex2f(250,250);
                        glVertex2f(270,250);
                        glVertex2f(240,220);
                        glEnd();      
                        glFlush(); 
                        setFont(GLUT_BITMAP_HELVETICA_18);
                        glColor3f(0.1,0.2,0.4);
                        drawstring(245,300,1,"please Press the button");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(245,288,1,"B to goto the desktop");  
                        glColor3f(0.1,0.2,0.4);
                        drawstring(245,276,1,"and click the second Icon"); 
                        glColor3f(0.1,0.2,0.4);
                        drawstring(245,264,1,"named as Google");                     
                        glFlush();                        
}
	    
void mykeyboard(unsigned char key,int x,int y)
{  
        if(key=='y' || key=='Y')
        {      
                   glClear(GL_COLOR_BUFFER_BIT);
                   draw();
                   text();

        }
        else if(key=='N' || key=='n')
                   exit(0);
        else if(key=='P' || key=='p')
        {       
                   glClear(GL_COLOR_BUFFER_BIT);
                   desktop();  
        }
        else if(key=='t' || key=='T')
        {
                     glClear(GL_COLOR_BUFFER_BIT);
                     title();
        }
        if(key=='1')
        {
         glClear(GL_COLOR_BUFFER_BIT);
         howsearchworks1();
        }
       if(key=='2')
                   howsearchworks2();
       if(key=='3')
                   howsearchworks3();           
       if(key=='b' || key=='B')
       {
                  glClearColor(0,0,0,0.0);
                  glColor3f(0.0f,0.0f,0.0f);
                   desktop();
       }
            
}
     
void myMouse(int btn, int state, int x, int y)
{       
        if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
        {
                x=x/2.88;
                y=(900-y)/1.8;   
                
         
                
                if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=30.0 && x<=60.0 && y>=350.0 && y<=380.0)
                {  
                  glBegin(GL_POLYGON);
                  glColor3f(1,1,1);
                  glVertex2i(60.0,380.0);
                  glVertex2i(30.0,380.0);
                  glVertex2i(30.0,350.0);
                  glVertex2i(60.0,350.0);
                  glEnd();
                  glFlush();
                  glClearColor(0.1,0.2,0.4,0.0);
                  glColor3f(0.0f,0.0f,0.0f);
                  sleep(2);
                  conversation();
                 } 
                    
                if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=175.0 && x<=225.0 && y>=220.0 && y<=235.0)
                 {                  
                        glBegin(GL_POLYGON);
                        glColor3f(0.5,0.5,0.5);
                        glVertex2f(175,220);
                        glVertex2f(175,235);
                        glVertex2f(225,235);
                        glVertex2f(225,220);            
                        glEnd();
                        setFont(GLUT_BITMAP_HELVETICA_10);
                        glColor3f(0,0,0);
                        drawstring(186.0,225.0,1.0,"Google search");
                        glFlush(); 
                        sleep(2);
                        howsearchworks();
                }
                if((x>=35.0 && x<=65.0) && (y>=275.0 && y<=305.0 ))//   Icon 2
                {       
                        glBegin(GL_POLYGON);
                        glColor3f(1,1,1);
                        glVertex2f(30,300);
                        glVertex2f(30,270);
                        glVertex2f(60,270);
                        glVertex2f(60,300);
                        glEnd();
                        glFlush();
                        sleep(1);
                        display2();                 
                }
                if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=175.0 && x<=225.0 && y>=220.0 && y<=235.0)
                        howsearchworks();
                if((x>=30.0 && x<=60.0) && (y>=190.0 && y<=220.0 ))  // 3 menu
                {
                                         
                        
                }
       }
}    
void display(void)
{       
        glClear(GL_COLOR_BUFFER_BIT);
        title();
     
}     
int main(int argc,char **argv)
{
            glutInit(&argc,argv);
            glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
            glutInitWindowPosition(0,0);
            glutInitWindowSize(1440,900);
            glutCreateWindow("System User Interface");
            glutDisplayFunc(display);
            glutMouseFunc(myMouse);
            glutKeyboardFunc(mykeyboard);
            glEnable(GL_DEPTH_TEST);
            myInit();
            glutMainLoop();
            return 1;
}
