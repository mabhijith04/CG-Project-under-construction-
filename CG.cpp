#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<GL/glut.h>
void *currentfont;
     
    void setFont(void *font)
    { currentfont=font;
    }
     
    void drawstring(float x,float y,float z,char *str)
    {       char *c;
            glRasterPos3f(x,y,z);
            for(c=str;*c!='\0';c++)
            {       glColor3f(0.0,0.0,0.0);
                    glutBitmapCharacter(currentfont,*c);
            }
    }
    void myInit()
    {       glClearColor(0.0,0.0,0.0,0.0);
            glColor3f(0.0f,0.0f,0.0f);
            glPointSize(5.0);
            gluOrtho2D(0.0,500.0,0.0,500.0);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            setFont(GLUT_BITMAP_HELVETICA_18);
    }
    void draw_key_int(void)                         // text for keyboard interaction
    {       glColor3f(0.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2f(0,0);
            glVertex2f(0,135);
            glVertex2f(500,135);
            glVertex2f(500,0);
            glEnd();
            glFlush();
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
     
    void text1(void)
     
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
 glColor3f(1,0,0);
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
 glColor3f(1,0,0);
 
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
       
          glBegin(GL_POLYGON);
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2f(30,380);
            glVertex2f(30,350);
            glVertex2f(60,350);
            glVertex2f(60,380);
            glEnd();
            glFlush();
            glBegin(GL_POLYGON);
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2f(30,300);
            glVertex2f(30,270);
            glVertex2f(60,270);
            glVertex2f(60,300);            
            glEnd();
            glFlush();
            glBegin(GL_POLYGON);
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2f(30,220);
            glVertex2f(30,190);
            glVertex2f(60,190);
            glVertex2f(60,220);            
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
            glFlush();
            glBegin(GL_POLYGON);  
            glColor3f(0.3f,0.4f,0.5f);
            glVertex2i(300,275);
            glVertex2i(285,275);
            glVertex2i(285,280);
            glVertex2i(300,280);
            glEnd();
            glFlush();
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
    {       glClear(GL_COLOR_BUFFER_BIT);
            setFont(GLUT_BITMAP_HELVETICA_18);
            glColor3f(1.0,1.0,1.0);
            drawstring(55.0,435.0,1.0,"                                                     \"Graphical Implementation Of System User Interface\"");
            glColor3f(1.0,1.0,1.0);
            drawstring(210.0,365.0,1.0,"SUBMITTED   BY");                          
            glColor3f(1.0,1.0,0.0);
            drawstring(150.0,340.0,1.0," XYZ                                            *********");
            glColor3f(1.0,1.0,0.0);
            drawstring(150.0,300.0,1.0," XYZ                        *********");
            glColor3f(1.0,1.0,1.0);
            drawstring(195.0,240.0,1.0,"UNDER THE GUIDANCE OF");
            glColor3f(1.0,1.0,0.0);
            drawstring(140.0,200.0,1.0," ABC                                 ABC ");
            setFont(GLUT_BITMAP_HELVETICA_12);
            glColor3f(1.0,0.0,1.0);
            drawstring(130.0,180.0,1.0,"                  Assistant Professor                                                   Assistant Professor");
            glColor3f(1.0,0.0,1.0);
            drawstring(130.0,160.0,1.0,"                     Dept. of CSE                                                            Dept. of CSE");
            glColor3f(1.0,0.0,1.0);
            drawstring(140.0,140.0,1.0,"                    ***IT                                                                      ***IT");
            draw_key_int();
            glFlush();
    }
void googlesearchtext()
{
 setFont(GLUT_BITMAP_HELVETICA_12);
 glColor3f(0.0,0.0,0.0);
 drawstring(155.0,260.0,1.0,"How Does GOOGLE Work ??? ");
 glFlush();
}
void googletext()
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
void zoomgoogle()
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
 glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_QUADS);
 glColor3f(1,1,1);
 glVertex2f(360,210);
 glVertex2f(400,210);
 glVertex2f(400,250);
 glVertex2f(360,250);
 glEnd();  
 glFlush();
 sleep(1);
 zoomgoogle();
}
void display2()
{
 float i,j;
 glClear(GL_COLOR_BUFFER_BIT);
 for(i=0;i<200;i=i+1) 
 {  
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
                glVertex2i(360,210);glVertex2i(400,210);glVertex2i(400,250);glVertex2i(360,250);
        glColor3f(1,0,0);
                glVertex2i(50+i,95);glVertex2i(50+i,195);glVertex2i(90+i,195);glVertex2i(90+i,95); //body
        glColor3f(1,0.5,0);
                glVertex2i(62+i,195);glVertex2i(78+i,195);glVertex2i(78+i,210);glVertex2i(62+i,210); //neck        
                glVertex2i(50+i,210);glVertex2i(90+i,210);glVertex2i(90+i,240);glVertex2i(50+i,240); //head        	      
                glVertex2i(75+i,175);glVertex2i(75+i,185);glVertex2i(145+i,175);glVertex2i(143+i,165); //hand       
                glVertex2i(63+i,95);glVertex2i(78+i,95);glVertex2i(78+i,35);glVertex2i(63+i,35); //leg       
                glVertex2i(63+i,35);glVertex2i(88+i,35);glVertex2i(88+i,20);glVertex2i(63+i,20); //feet
        glEnd();
        glBegin(GL_TRIANGLES);
        glColor3f(0.60,0.40,0.70);
                glVertex2i(88+i,35);glVertex2i(88+i,20);glVertex2i(94+i,20); //toes
        glColor3f(0,0,0);
                glVertex2i(75+i,230);glVertex2i(90+i,230);glVertex2i(90+i,235); //eye brows        
                glVertex2i(80+i,223);glVertex2i(90+i,223);glVertex2i(85+i,228); //eyes
        glEnd();
        glFlush();
              
      glBegin(GL_QUADS);
      glColor3f(0,0,0);   // to remove traces create movement of frame in black
	        glVertex2i(50-40+i,95);glVertex2i(50-40+i,195);glVertex2i(90-40+i,195);glVertex2i(90-40+i,95);
	        glVertex2i(62-17+i,195);glVertex2i(78-17+i,195);glVertex2i(78-17+i,210);glVertex2i(62-17+i,210);
	        glVertex2i(50-40+i,210);glVertex2i(90-40+i,210);glVertex2i(90-40+i,240);glVertex2i(50-40+i,240); 
	        glVertex2i(63-15+i,95); glVertex2i(78-15+i,95);glVertex2i(78-15+i,35);glVertex2i(63-15+i,35);
	        glVertex2i(63-25+i,35);glVertex2i(88-25+i,35);glVertex2i(88-25+i,20);glVertex2i(63-25+i,20);
      glEnd();
      glBegin(GL_TRIANGLES);
                glVertex2i(88-35+i,35);glVertex2i(88-35+i,20);glVertex2i(94-35+i,20);
        glEnd();
        glFlush();
	}
	google();
}
void howsearchworks()
{
 glClear(GL_COLOR_BUFFER_BIT);
 setFont(GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(1,1,1);
 drawstring(190,300,1.0,"HOW SEARCH WORKS");
 setFont(GLUT_BITMAP_HELVETICA_18);
 glColor3f(1,1,1);
 drawstring(195,270,1.0,"From Algorithms to Answers.");
 glFlush();
  setFont(GLUT_BITMAP_HELVETICA_12);
 glColor3f(0.60,0.40,0.70);
 drawstring(300,150,1.0,"Press 1 to Continue.");
 glFlush();
}

void howsearchworks1()
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

void howsearchworks2()
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
  drawstring(340,395,1.0,"R");
  drawstring(340,380,1.0,"A");
  drawstring(340,365,1.0,"W");
  drawstring(340,350,1.0,"L");
  drawstring(340,335,1.0,"I");
  drawstring(340,320,1.0,"N");
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

void howsearchworks3()
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
 setFont(GLUT_BITMAP_HELVETICA_12);
 glColor3f(0.60,0.40,0.70);
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
    void mykeyboard(unsigned char key,int x,int y)
    {  if(key=='y' || key=='Y')
       {
             glClear(GL_COLOR_BUFFER_BIT);
             draw();
             text();
       }
       if(key=='N' || key=='n')
                    exit(0);
       if(key=='P' || key=='p')
       {
             glClear(GL_COLOR_BUFFER_BIT);
             text1();              
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
                   howsearchworks();
    }     
     void mymouse(int btn,int state, int x, int y)
     { 
      x=x/2;
      y=(1000-y)/2.1;
      if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=30.0 && x<=60.0 && y>=270.0 && y<=300.0)
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
      if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=225.0 && x<=275.0 && y>=240.0 && y<=255.0)
       { 
       glEnd();
       glFlush();
       howsearchworks();
       }
      else if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=30.0 && x<=60.0 && y>=380.0 && y<=350.0)
      { 
        
        display2();       
      }
      else if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN && x>=30.0 && x<=60.0 && y>=220.0 && y<=190.0)
      {     
        display2();       
      }
     }
    void display(void)
    {       glClear(GL_COLOR_BUFFER_BIT);
            title();
     
    }
     
    int main(int argc,char **argv)
    {
            glutInit(&argc,argv);
            glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
            glutInitWindowPosition(0,0);
            glutInitWindowSize(1448,900);
            glutCreateWindow("System User Interface");
            glutDisplayFunc(display);       
            glutMouseFunc(mymouse);
            glutKeyboardFunc(mykeyboard);
            glEnable(GL_DEPTH_TEST);
            myInit();
            glutMainLoop();
       
    return 1;
    }
