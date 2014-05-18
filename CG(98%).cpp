                                            // Graphical Implementation Of System User Interface	
    #include<stdio.h>
    #include<stdlib.h>
    #include<GL/glut.h>
    #include<unistd.h>

    void *currentfont;
     
    void setFont(void *font)
    { 
        currentfont=font;
    }
     
    void drawstring(float x,float y,float z,char *str)
    {       char *c;
            glRasterPos3f(x,y,z);
            for(c=str;*c!='\0';c++)
            {       glColor3f(0.0,0.0,0.0);
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
         
         glColor3f(1,0,0);
         glBegin(GL_LINE_LOOP);
         glVertex2f(100,340);
         glVertex2f(100,400);
         glVertex2f(140,400);
         glVertex2f(140,340);
         glEnd();
         glFlush();
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0.60,0.40,0.70);
         drawstring(115,390,1.0,"12");
         glFlush();
          glColor3f(0.60,0.40,0.70);
         drawstring(135,365,1.0,"3");
         glFlush();
          glColor3f(0.60,0.40,0.70);
         drawstring(118,345,1.0,"6");
         glFlush();
          glColor3f(0.60,0.40,0.70);
         drawstring(102,365,1.0,"9");
         glFlush();
         glBegin(GL_LINE_LOOP);
         glColor3f(0,1,0);
         glVertex2f(119,365);
         glVertex2f(119,387);
         glEnd();
         glFlush();
         glBegin(GL_LINE_LOOP);
         glColor3f(0,1,0);
         glVertex2f(119,365);
         glVertex2f(130,365);
         glEnd();
         glFlush();
         glBegin(GL_LINE_LOOP);
         glColor3f(1,0,0);
         glVertex2f(0,50);
         glVertex2f(0,450);
         glVertex2f(480,450);
         glVertex2f(480,50);
         glEnd();
         glFlush();
         /*glBegin(GL_LINE_LOOP);
         glColor3f(1,0,0);
         glVertex2f(20,50);
         glVertex2f(0,0);
         glEnd();
         glFlush();
         glBegin(GL_LINE_LOOP);
         glColor3f(1,0,0);
         glVertex2f(20,450);
         glVertex2f(0,500);
         glEnd();
         glFlush();*/
         glBegin(GL_LINE_LOOP);
         glColor3f(1,0,0);
         glVertex2f(480,450);
         glVertex2f(500,500);
         glEnd();
         glFlush();
         glBegin(GL_LINE_LOOP);
         glColor3f(1,0,0);
         glVertex2f(480,50);
         glVertex2f(500,0);
         glEnd();
         glFlush();
         /*glBegin(GL_QUADS);
         glColor3f(0.196078,0.8,0.196078);
         glVertex2f(0,0);
         glVertex2f(0,500);
         glVertex2f(20,450);
          glVertex2f(20,50);
         glEnd();
         glFlush();*/
          glBegin(GL_QUADS);
         glColor3f(0.196078,0.8,0.196078);
         glVertex2f(480,50);
         glVertex2f(480,450);
         glVertex2f(500,500);
          glVertex2f(500,0);
         glEnd();
         glFlush();
         /* glBegin(GL_QUADS);
         glColor3f(0.196078,0.8,0.196078);
         glVertex2f(20,50);
         glVertex2f(20,450);
         glVertex2f(480,450);
          glVertex2f(480,450);
         glEnd();
         glFlush();*/
         
         
         
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
              glColor3f(0,0,0); // to remove traces create movement of frame in black
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
         glColor3f(0.3,0.6,0.1);
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
         glColor3f(1,1,0);
         drawstring(65,320,1.0,"And its constantly growing.");

         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0.9,0.20,0.30);
         drawstring(200,300,1.0,"Press 2 to Continue.");
         
         glFlush();
}

void howsearchworks2() //crawling
{        
        float i;           
        for(i=0;i<250;i=i+5) 
        {  
         glColor3f(0,0.3,0.5);
         glBegin(GL_QUADS);
         glVertex2i(0+i,500);
         glVertex2i(250+i,500);
         glVertex2i(250+i,250);
         glVertex2i(0+i,250);
         glEnd();
         glFlush();
         
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(0-250+i,500);
         glVertex2f(250-250+i,500);
         glVertex2f(250-250+i,250);
         glVertex2f(0-250+i,250);
         glEnd();
         glFlush();
        }
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
        
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_HELVETICA_18);
         drawstring(341,455,1.0,"Google Navigates the Web by");
         
         for(i=0;i<50;i=i+0.2) 
         {          
                 setFont(GLUT_BITMAP_TIMES_ROMAN_24);
                 glColor3f(1,0,0);
                 drawstring(300-14+i,410,1.0,"C");       
                 glColor3f(1,0,0);
                 drawstring(300-12+i,395,1.0,"R");
                 glColor3f(1,0,0);         
                 drawstring(300-10+i,380,1.0,"A");        
                 glColor3f(1,0,0);
                 drawstring(300-8+i,365,1.0,"W");         
                 glColor3f(1,0,0);
                 drawstring(300-6+i,350,1.0,"L");        
                 glColor3f(1,0,0);
                 drawstring(300-4+i,335,1.0,"I");         
                 glColor3f(1,0,0);
                 drawstring(300-2+i,320,1.0,"N");        
                 glColor3f(1,0,0);
                 drawstring(300+i,305,1.0,"G");          
                 
                 setFont(GLUT_BITMAP_TIMES_ROMAN_24);
                 glColor3f(0,0,1);
                 drawstring(300-15+i,410,1.0,"C");         
                 glColor3f(0,0,1);
                 drawstring(300-13+i,395,1.0,"R");         
                 glColor3f(0,0,1);         
                 drawstring(300-11+i,380,1.0,"A");         
                 glColor3f(0,0,1);
                 drawstring(300-9+i,365,1.0,"W");        
                 glColor3f(0,0,1);
                 drawstring(300-7+i,350,1.0,"L");         
                 glColor3f(0,0,1);
                 drawstring(300-5+i,335,1.0,"I");         
                 glColor3f(0,0,1);
                 drawstring(300-3+i,320,1.0,"N");         
                 glColor3f(0,0,1);
                 drawstring(300-1+i,305,1.0,"G");         
                 glFlush();
         }          
         setFont(GLUT_BITMAP_9_BY_15);
         glColor3f(0,0.9,0.7);
         drawstring(400,390,1.0,"That means,");
         
         glColor3f(0,0.9,0.7);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,380,1.0,"It follows links from");
         
         glColor3f(0,0.9,0.7);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,370,1.0,"page to page");
         
         glColor3f(0,0.9,0.7);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,350,1.0,"site owners choose");
         
         glColor3f(0,0.9,0.7);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,340,1.0,"whether their sites");
         
         glColor3f(0,0.9,0.7);
         setFont(GLUT_BITMAP_9_BY_15);
         drawstring(400,330,1.0,"are crawled");
         
         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0.60,0.40,0.70);
         drawstring(420,290,1.0,"Press 3 to Continue.");
         glFlush();
}

void howsearchworks3() //Index
{        
         float i;
         glClearColor(0.0,0.0,0.0,0.0);
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(250,500);
         glVertex2f(500,500);
         glVertex2f(500,250);
         glVertex2f(250,250);
         glEnd();
         
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(0,500);
         glVertex2f(250,500);
         glVertex2f(250,250);
         glVertex2f(0,250);
         glEnd();
         
         for(i=0;i<250;i=i+5) 
        {  
         glColor3f(1,1,0);
         glBegin(GL_QUADS);
         glVertex2i(250,500-i);
         glVertex2i(500,500-i);
         glVertex2i(500,250-i);
         glVertex2i(250,250-i);
         glEnd();
         glFlush();         
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2i(250,500+250-i);
         glVertex2i(500,500+250-i);
         glVertex2i(500,250+250-i);
         glVertex2i(250,250+250-i);
         glEnd();
         glFlush();
        }
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(0,500);
         glVertex2f(250,500);
         glVertex2f(250,250);
         glVertex2f(0,250);
         glEnd();
         
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
        
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_HELVETICA_18);
         drawstring(341,455,1.0,"Google Navigates the Web by");
         
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
                  
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0,0,0);
         drawstring(320,215,1.0,"And it keeps track of it all in . . .");
         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(0,0,0);
         drawstring(295,150,1.0,"THE");
         
         for(i=0;i<50;i=i+10) 
         { 
                 setFont(GLUT_BITMAP_TIMES_ROMAN_24);
                 glColor3f(1,0,0);
                 drawstring(320-30+i,150-60+i,1.0,"I");
                 
                 glColor3f(1,0,0);
                 drawstring(330-30+i,135-60+i,1.0,"N");
         
                 glColor3f(1,0,0);
                 drawstring(340-30+i,120-60+i,1.0,"D");
         
                 glColor3f(1,0,0);
                 drawstring(350-30+i,105-60+i,1.0,"E");
         
                 glColor3f(1,0,0);
                 drawstring(360-30+i,90-60+i,1.0,"X");
                 glFlush();
                 sleep(1);
         }
 
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(0,0,1);
         drawstring(400,150,1.0,"The Index is over");
         
         glColor3f(0,0,1);
         drawstring(400,130,1.0,"100 MILLION Gigabytes");
         glFlush();   
         
         glColor3f(0,0,1);
         drawstring(400,110,1.0,"Its like a database");
         glFlush();               
         
         glColor3f(0,0,1);
         drawstring(400,90,1.0,"servicing all requests");
         glFlush();
         
         setFont(GLUT_BITMAP_HELVETICA_12);
         glColor3f(0.3,0.3,0.5);
         drawstring(420,50,1.0,"Press 4 to Continue."); 
         glFlush();
}
    
void howsearchworks4()
{        
         float i;
         glClearColor(0.0,0.0,0.0,0.0);
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glColor3f(0.65,0.65,0.65);
         glVertex2f(250,500);
         glVertex2f(500,500);
         glVertex2f(500,250);
         glVertex2f(250,250);
         glEnd();         
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(0,500);
         glVertex2f(250,500);
         glVertex2f(250,250);
         glVertex2f(0,250);
         glEnd();
         for(i=0;i<250;i=i+5) 
         { 
                 glBegin(GL_QUADS);
                 glColor3f(0.65,0.85,0.85);
                 glVertex2f(250-i,250);
                 glVertex2f(500-i,250);
                 glVertex2f(500-i,0);
                 glVertex2f(250-i,0);
                 glEnd();
                 
                 glBegin(GL_QUADS);
                 glColor3f(0.65,0.65,0.65);
                 glVertex2f(250-i+250,250);
                 glVertex2f(500-i+250,250);
                 glVertex2f(500-i+250,0);
                 glVertex2f(250-i+250,0);
                 glEnd();
                 glFlush();
         }   
         
         for(i=0;i<50;i=i+0.5)
         {
                 glBegin(GL_QUADS);
                 glColor3f(0,0,0);
                 glVertex2f(250-i,250);
                 glVertex2f(250,250);
                 glVertex2f(250,200);
                 glVertex2f(250-i,200);
                 glBegin(GL_QUADS);
                 glColor3f(0,0,0);
                 glVertex2f(0,50);
                 glVertex2f(0+i,50);
                 glVertex2f(0+i,0);
                 glVertex2f(0,0);
                 glBegin(GL_QUADS);
                 glColor3f(0,0,0);
                 glVertex2f(0,250);
                 glVertex2f(0+i,250);
                 glVertex2f(0+i,200);
                 glVertex2f(0,200);
                 glBegin(GL_QUADS);
                 glColor3f(0,0,0);
                 glVertex2f(250-i,0);
                 glVertex2f(250,0);
                 glVertex2f(250,50);
                 glVertex2f(250-i,50);
                 glEnd();
                 glFlush();
         }
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(1,0,0);
         drawstring(202,220,1.0,"Auto Complete");
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(1,0,0);
         drawstring(1,20,1.0,"Search Methods");
         glFlush(); 
         glColor3f(1,0,0);
         drawstring(5,225,1.0,"Synonyms");
         glFlush(); 
         glColor3f(1,0,0);
         drawstring(203,25,1.0,"Google Instant");
         glFlush();                                    
         glColor3f(0.65,0.65,0.65);
         glBegin(GL_QUADS);
         glVertex2f(0,500);
         glVertex2f(250,500);
         glVertex2f(250,250);
         glVertex2f(0,250);
         glEnd();         
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
         glColor3f(0,0,0);
         setFont(GLUT_BITMAP_HELVETICA_18);
         drawstring(341,455,1.0,"Google Navigates the Web by");         
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
         glColor3f(0.65,0.65,0.65);
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
                 setFont(GLUT_BITMAP_TIMES_ROMAN_24);
                 glColor3f(0,0,0);
                 drawstring(320,150,1.0,"I");                 
                 glColor3f(0,0,0);
                 drawstring(330,135,1.0,"N");         
                 glColor3f(0,0,0);
                 drawstring(340,120,1.0,"D");         
                 glColor3f(0,0,0);
                 drawstring(350,105,1.0,"E");        
                 glColor3f(0,0,0);
                 drawstring(360,90,1.0,"X");
                 glFlush(); 
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(0,0,0);
         drawstring(400,150,1.0,"The Index is over");         
         glColor3f(0,0,0);
         drawstring(400,130,1.0,"100 MILLION Gigabytes");
         glFlush();           
         glColor3f(0,0,0);
         drawstring(400,110,1.0,"Its like a database");
         glFlush();                        
         glColor3f(0,0,0);
         drawstring(400,90,1.0,"servicing all requests");
         glFlush();      
         
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0,0,0);
         drawstring(80,205,1.0,"Google Uses Tonnes of");         
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(1,0,0);
         drawstring(77,155,1.0,"A L G O R I T H M S");         
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0,0,0);
         drawstring(110,135,1.0,"&");        
         setFont(GLUT_BITMAP_TIMES_ROMAN_24);
         glColor3f(0,0,1);
         drawstring(60,115,1.0,"PROGRAMS  + FORMULAS");         
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0.6,0.3,0.1);
         drawstring(75,60,1.0,"To Deliver the Best Results");         
         setFont(GLUT_BITMAP_HELVETICA_18);
         glColor3f(0.6,0.3,0.1);
         drawstring(75,40,1.0,"For all Our Queries/Searches");
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
                        glColor3f(0.1,0.2,0.4);
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
                        drawstring(276,288,1,"Lets begin this Project");
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
                        drawstring(230,288,1.0,"Now don't get cranky");
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
                        glVertex2f(330,320);
                        glVertex2f(330,250);
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
                        drawstring(228,264,1.0,"you to go through the Project");
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
                        drawstring(260,271,1,"GOOGLE works");
                        glFlush();
                        sleep(4);
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
                        drawstring(260,295,1,"And");
                        glColor3f(0.1,0.2,0.4);
                        drawstring(260,283,1,"Later go through ");
                        glColor3f(0.1,0.2,0.4);
                        drawstring(260,271,1,"how INTERNET works");
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
                        drawstring(245,300,1,"Press the button");
                        glColor3f(0.1,0.2,0.4);
                        drawstring(240,288,1,"B to Switch to the desktop");
                        glFlush();
}

void internetwork()
{
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_LINE_LOOP);  //sender house
        glColor3f(1,0,0);
        glVertex2i(100,100);
        glVertex2i(100,150);
        glVertex2i(130,150);
        glVertex2i(130,100);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,0,0);
        glVertex2i(100,150);
        glVertex2i(115,175);
        glVertex2i(130,150);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP); //laptop
        glColor3f(1,0,0);
        glVertex2i(150,125);
        glVertex2i(150,175);
        glVertex2i(180,175);
        glVertex2i(180,125);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(1,0,0);
        glVertex2i(165,100);
        glVertex2i(150,125);
        glVertex2i(180,125);
        glVertex2i(195,100);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(150.0,80.0,1.0,"C L I E N T");
        glFlush();

        glBegin(GL_LINE_LOOP); //isp
        glColor3f(0,1,0);
        glVertex2i(250,100);
        glVertex2i(250,150);
        glVertex2i(300,150);
        glVertex2i(300,100);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(265.0,125.0,1.0," I S P");
        glFlush();
        glBegin(GL_QUADS); //gmail
        glColor3f(0.5,0,0.9);
        glVertex2i(350,100);
        glVertex2i(350,150);
        glVertex2i(380,150);
        glVertex2i(380,100);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(390.0,125.0,1.0," Google.com ");
        glFlush();

        glBegin(GL_QUADS); //interface
        glColor3f(0.2,0.2,0.2);
        glVertex2i(80,245);
        glVertex2i(80,255);
        glVertex2i(400,255);
        glVertex2i(400,245);
        glEnd();
        glFlush();

        glBegin(GL_LINE_LOOP); // server n isp
        glColor3f(0,0,1);
        glVertex2i(140,300);
        glVertex2i(140,350);
        glVertex2i(170,350);
        glVertex2i(170,300);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,1);
        glVertex2i(155,325);
        glVertex2i(155,375);
        glVertex2i(185,375);
        glVertex2i(185,325);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,1);
        glVertex2i(140,350);
        glVertex2i(155,375);
        glVertex2i(185,375);
        glVertex2i(170,350);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,1);
        glVertex2i(140,300);
        glVertex2i(155,325);
        glVertex2i(185,325);
        glVertex2i(170,300);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,1);
        glVertex2i(140,300);
        glVertex2i(140,350);
        glVertex2i(155,375);
        glVertex2i(155,325);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,1);
        glVertex2i(170,300);
        glVertex2i(170,350);
        glVertex2i(185,375);
        glVertex2i(185,325);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(90.0,325.0,1.0," S E R V E R");
        glFlush();
        glBegin(GL_LINE_LOOP);        //receiving house
        glColor3f(1,1,0);
        glVertex2i(340,300);
        glVertex2i(340,350);
        glVertex2i(370,350);
        glVertex2i(370,300);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,1,0);
        glVertex2i(340,350);
        glVertex2i(355,375);
        glVertex2i(370,350);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(330.0,395.0,1.0," R E C E I V E R");
        glFlush();
        glBegin(GL_LINE_LOOP); // connection btw server n receiving house
        glColor3f(1,0.5,1);
        glVertex2i(185,330);
        glVertex2i(185,335);
        glVertex2i(340,335);
        glVertex2i(340,330);
        glEnd();
        glFlush();

        glBegin(GL_LINE_LOOP); // connection btw  gmail and interface
        glColor3f(1,0.5,1);
        glVertex2i(365,150);
        glVertex2i(365,245);
        glVertex2i(368,245);
        glVertex2i(368,150);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP); // connection btw client and isp
        glColor3f(1,0.5,1);
        glVertex2i(180,140);
        glVertex2i(180,145);
        glVertex2i(250,145);
        glVertex2i(250,140);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP); //connection btw isp and interface
        glColor3f(1,0.5,1);
        glVertex2i(270,150);
        glVertex2i(270,245);
        glVertex2i(273,245);
        glVertex2i(273,150);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP); //connection btw server and interface
        glColor3f(1,0.5,1);
        glVertex2i(155,255);
        glVertex2i(155,300);
        glVertex2i(158,300);
        glVertex2i(158,255);
        glEnd();
        glFlush();
        sleep(2);
        glBegin(GL_POLYGON); // connection btw client and isp
        glColor3f(1,0.5,1);
        glVertex2i(180,140);
        glVertex2i(180,145);
        glVertex2i(250,145);
        glVertex2i(250,140);
        glEnd();

        glFlush();
        sleep(2);
        glBegin(GL_LINE_LOOP); //isp
        glColor3f(0,0,1);
        glVertex2i(250,100);
        glVertex2i(250,150);
        glVertex2i(300,150);
        glVertex2i(300,100);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);  //sender house
        glColor3f(1,1,0);
        glVertex2i(100,100);
        glVertex2i(100,150);
        glVertex2i(130,150);
        glVertex2i(130,100);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,1,0);
        glVertex2i(100,150);
        glVertex2i(115,175);
        glVertex2i(130,150);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP); //laptop
        glColor3f(1,1,0);
        glVertex2i(150,125);
        glVertex2i(150,175);
        glVertex2i(180,175);
        glVertex2i(180,125);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(1,1,0);
        glVertex2i(165,100);
        glVertex2i(150,125);
        glVertex2i(180,125);
        glVertex2i(195,100);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(200.0,50.0,1.0,"Connected...");
        glFlush();
        sleep(2);
        glBegin(GL_POLYGON); //connection btw isp and interface
        glColor3f(1,0.5,1);
        glVertex2i(270,150);
        glVertex2i(270,245);
        glVertex2i(273,245);
        glVertex2i(273,150);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(300.0,180.0,1.0,"Connecting...");
        glFlush();
        sleep(2);
        glBegin(GL_POLYGON); //connection btw server and interface
        glColor3f(1,0.5,1);
        glVertex2i(155,255);
        glVertex2i(155,300);
        glVertex2i(158,300);
        glVertex2i(158,255);
        glEnd();
        glFlush();
        sleep(2);  // to change the color of the server
        glBegin(GL_LINE_LOOP); // server n isp
        glColor3f(0,1,0);
        glVertex2i(140,300);
        glVertex2i(140,350);
        glVertex2i(170,350);
        glVertex2i(170,300);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2i(155,325);
        glVertex2i(155,375);
        glVertex2i(185,375);
        glVertex2i(185,325);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2i(140,350);
        glVertex2i(155,375);
        glVertex2i(185,375);
        glVertex2i(170,350);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2i(140,300);
        glVertex2i(155,325);
        glVertex2i(185,325);
        glVertex2i(170,300);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2i(140,300);
        glVertex2i(140,350);
        glVertex2i(155,375);
        glVertex2i(155,325);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,1,0);
        glVertex2i(170,300);
        glVertex2i(170,350);
        glVertex2i(185,375);
        glVertex2i(185,325);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(170.0,400.0,1.0,"Connected...");
        glFlush();
        sleep(2);
        glBegin(GL_QUADS); //letter
        glColor3f(0.1,0.2,0.3);
        glVertex2i(355,60);
        glVertex2i(355,80);
        glVertex2i(375,80);
        glVertex2i(375,60);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2i(355,80);
        glVertex2i(365,70);
        glVertex2i(375,80);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(360.0,35.0,1.0,"G M A I L");
        glFlush();
        sleep(2);
        glBegin(GL_QUADS); //gmail
        glColor3f(0.7,0.1,0.4);
        glVertex2i(350,100);
        glVertex2i(350,150);
        glVertex2i(380,150);
        glVertex2i(380,100);
        glEnd();
        glFlush();
        sleep(2);
        glBegin(GL_QUADS); // connection btw  gmail and interface
        glColor3f(1,0.5,1);
        glVertex2i(365,150);
        glVertex2i(365,245);
        glVertex2i(368,245);
        glVertex2i(368,150);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(400.0,180.0,1.0,"Mail Sent...");
        glFlush();
        sleep(2);
        glBegin(GL_QUADS); // connection btw server n receiving house
        glColor3f(1,0.5,1);
        glVertex2i(185,330);
        glVertex2i(185,335);
        glVertex2i(340,335);
        glVertex2i(340,330);
        glEnd();
        glFlush();
        sleep(2);
        glBegin(GL_LINE_LOOP);        //receiving house
        glColor3f(1,0,0);
        glVertex2i(340,300);
        glVertex2i(340,350);
        glVertex2i(370,350);
        glVertex2i(370,300);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,0,0);
        glVertex2i(340,350);
        glVertex2i(355,375);
        glVertex2i(370,350);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(400.0,325.0,1.0,"Received...");
        glFlush();
}

void internetmean()
{
        //sleep(1);
        glClear(GL_COLOR_BUFFER_BIT);
         setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(200.0,420.0,1.0,"N E T W O R K");
        glBegin(GL_LINE_LOOP);
        glColor3f(1,0.5,1);
        glVertex2i(100,350);
        glVertex2i(100,390);
        glVertex2i(170,390);
        glVertex2i(170,350);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,0.5,1);
        glVertex2i(80,300);
        glVertex2i(100,330);
        glVertex2i(170,330);
        glVertex2i(150,300);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,0.5,1);
        glVertex2i(270,350);
        glVertex2i(270,390);
        glVertex2i(340,390);
        glVertex2i(340,350);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(1,0.5,1);
        glVertex2i(250,300);
        glVertex2i(270,330);
        glVertex2i(340,330);
        glVertex2i(320,300);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.439216,0.858824,0.576471);
        glVertex2i(170,370);
        glVertex2i(170,372);
        glVertex2i(270,372);
        glVertex2i(270,370);
        glEnd();
        glFlush();          // 1st network

        sleep(1);
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(270.0,20.0,1.0,"N E T W O R K");
        glBegin(GL_LINE_LOOP);
        glColor3f(0.2,0.4,0.8);
        glVertex2i(180,100);
        glVertex2i(180,140);
        glVertex2i(250,140);
        glVertex2i(250,100);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.2,0.4,0.8);
        glVertex2i(160,50);
        glVertex2i(180,80);
        glVertex2i(250,80);
        glVertex2i(230,50);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.2,0.4,0.8);
        glVertex2i(350,100);
        glVertex2i(350,140);
        glVertex2i(420,140);
        glVertex2i(420,100);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.2,0.4,0.8);
        glVertex2i(330,50);
        glVertex2i(350,80);
        glVertex2i(420,80);
        glVertex2i(400,50);
        glEnd();
        glFlush();

        glBegin(GL_LINE_LOOP);
        glColor3f(0.439216,0.858824,0.576471);
        glVertex2i(250,120);
        glVertex2i(250,122);
        glVertex2i(350,122);
        glVertex2i(350,120);
        glEnd();
        glFlush();   // 2nd Network

        sleep(1);
        glBegin(GL_LINE_LOOP);
        glColor3f(0.576471,0.858824,0.439216);
        glVertex2i(230,220);
        glVertex2i(230,250);
        glVertex2i(270,250);
        glVertex2i(270,220);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.576471,0.858824,0.439216);
        glVertex2i(233,223);
        glVertex2i(233,247);
        glVertex2i(267,247);
        glVertex2i(267,223);
        glEnd();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(235.0,230.0,1.0,"ROUTER");
        glFlush();  // router
        sleep(1);
        glBegin(GL_LINE_LOOP);
        glColor3f(0.576471,0.858824,0.439216);
        glVertex2i(210,235);
        glVertex2i(210,237);
        glVertex2i(230,237);
        glVertex2i(230,235);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.576471,0.858824,0.439216);
        glVertex2i(210,237);
        glVertex2i(210,370);
        glVertex2i(212,370);
        glVertex2i(212,237);
        glEnd();
        glFlush();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.576471,0.858824,0.439216);
        glVertex2i(270,235);
        glVertex2i(270,237);
        glVertex2i(290,237);
        glVertex2i(290,235);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(0.576471,0.858824,0.439216);
        glVertex2i(290,235);
        glVertex2i(290,122);
        glVertex2i(288,122);
        glVertex2i(288,235);
        glEnd();
        glFlush();
        sleep(1);
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(100.0,230.0,1.0,"I N T E R - N E T W O R K");
                    glFlush();
                    sleep(1);
                     glColor3f(1.0,1.0,1.0);
                    drawstring(400.0,20.0,1.0,"Press c to continue...");
                    glFlush();
            
}
void what() // what is internet
{
 float i,j,k;
 glClear(GL_COLOR_BUFFER_BIT);
 setFont(GLUT_BITMAP_HELVETICA_18);
            for(i=0;i<250.0;i=i+30)
            {
            sleep(0.5);
            glColor3f(1.0,1.0,1.0);
            drawstring(0+i,300.0,1.0," W H A T");
            glFlush();
            glColor3f(0,0,0);
            drawstring(-30+i,300.0,1.0," W H A T");
            glFlush();
            }
            for(j=500;j>250.0;j=j-50)
            {sleep(0.5);
            glColor3f(0.4,0.6,0.1);
            drawstring(0+j-50,250.0,1.0," I S");
            glFlush();
            glColor3f(0,0,0);
            drawstring(j,250.0,1.0," I S");
            glFlush();
            }
            for(k=0;k<=200.0;k=k+50)
            {
            sleep(0.5);
            glColor3f(0.8,0.2,0.6);
            drawstring(250.0,0+k,1.0," I N T E R N E T ?");
            glFlush();
            glColor3f(0,0,0);
            drawstring(250.0,-50+k,1.0," I N T E R N E T ?");
            glFlush();
            }
            glColor3f(1.0,1.0,1.0);
            drawstring(400.0,100.0,1.0,"Press W to Continue...");
            glFlush();
            }

void work() // how internet works
{
float i,j,k;
glClear(GL_COLOR_BUFFER_BIT);
setFont(GLUT_BITMAP_HELVETICA_18);
            for(i=0;i<250.0;i=i+30)
            {
            sleep(0.5);
            glColor3f(1.0,1.0,1.0);
            drawstring(0+i,300.0,1.0,"H O W");
            glFlush();
            glColor3f(0,0,0);
            drawstring(-30+i,300.0,1.0,"H O W");
            glFlush();
            }
            for(j=500;j>250.0;j=j-50)
            {sleep(0.5);
            glColor3f(0.4,0.6,0.1);
            drawstring(0+j-50,250.0,1.0," I N T E R N E T");
            glFlush();
            glColor3f(0,0,0);
            drawstring(j,250.0,1.0," I N T E R N E T");
            glFlush();
            }
            for(k=0;k<=200.0;k=k+50)
            {sleep(0.5);
            glColor3f(0.8,0.2,0.6);
            drawstring(270.0,0+k,1.0," W O R K S ?");
            glFlush();
            glColor3f(0,0,0);
            drawstring(270.0,-50+k,1.0," W O R K S ?");
            glFlush();
            }
            glColor3f(1.0,1.0,1.0);
            drawstring(400.0,100.0,1.0,"Press H to Continue...");
            glFlush();
            }

void internettext()
{ 
    float i;
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,1);
    setFont(GLUT_BITMAP_HELVETICA_18);
            for(i=0;i<500.0;i=i+70)
            {
             sleep(1);
             glColor3f(1,1,1);
             drawstring(0+i,250.0,1.0,"I N T E R N E T");
             glFlush();
             glColor3f(1.0,1.0,1.0);
             drawstring(210.0,500.0-i+30,1.0,"I N T E R N E T");
             glFlush();
            }
            glColor3f(1.0,1.0,1.0);
            drawstring(400.0,100.0,1.0,"Press C to Continue...");
            glFlush();
            }
    
    void myInit()
    {       
            glClearColor(0.0,0.0,0.0,1.0);
            glColor3f(0.0,0.0,0.0);
            glPointSize(4.0);
            glLineWidth(2.0);
            gluOrtho2D(0.0,500.0,0.0,500.0);
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
        glFlush();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(33.0,335.0,1.0,"CHAT");
                    glFlush();
        glBegin(GL_POLYGON);
        glColor3f(0.7f,0.2f,0.2f);
        glVertex2i(60.0,300.0);
        glVertex2i(30.0,300.0);
        glVertex2i(30.0,270.0);
        glVertex2i(60.0,270.0);
        glEnd();
        glFlush();
        glBegin(GL_POLYGON);
        glColor3f(1,0,0);
        glVertex2i(30.0,300.0);
        glVertex2i(60.0,300.0);
        glVertex2i(45.0,285.0);
        glEnd();
        glFlush();
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex2i(60.0,300.0);
        glVertex2i(60.0,270.0);
        glVertex2i(45.0,285.0);
        glEnd();
        glFlush();
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex2i(30.0,270.0);
        glVertex2i(60.0,270.0);
        glVertex2i(45.0,285.0);
        glEnd();
        glFlush();
        glBegin(GL_POLYGON);
        glColor3f(1,1,0);
        glVertex2i(30.0,270.0);
        glVertex2i(30.0,300.0);
        glVertex2i(45.0,285.0);
        glEnd();
        glFlush();
        glBegin(GL_POLYGON);
        glColor3f(0.7f,0.2f,0.2f);
        glVertex2i(60.0,220.0);
        glVertex2i(30.0,220.0);
        glVertex2i(30.0,190.0);
        glVertex2i(60.0,190.0);
        glEnd();
        glFlush();
        glBegin(GL_POLYGON);
        glColor3f(0.2,0.1,0.6);
        glVertex2i(0.0,0.0);
        glVertex2i(0.0,20.0);
        glVertex2i(500.0,20.0);
        glVertex2i(500.0,0.0);
        glEnd();
        glFlush();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(30.0,255.0,1.0,"GOOGLE");
                    glFlush();
        glBegin(GL_POLYGON);
        glColor3f(0.5,0.5,0.5);
        glVertex2i(0.0,0.0);
        glVertex2i(0.0,20.0);
        glVertex2i(50.0,20.0);
        glVertex2i(50.0,0.0);
        glEnd();
        glFlush();
        setFont(GLUT_BITMAP_HELVETICA_18);
                    glColor3f(1.0,1.0,1.0);
                    drawstring(28.0,175.0,1.0,"INTERNET");
                    glFlush();
        glColor3f(1.0,1.0,1.0);
            drawstring(0.0,7.0,1.0," SHUT DOWN");
            glFlush();       
}     
void draw() // TO DRAW POLYGON FOR LOADING
{
           float i,j;
            
            for(j=0;j<3;j++)
             {
             for(i=0;i<50;i=i+0.5)
             {
              glBegin(GL_POLYGON);  
              glColor3f(0.1f,0.4f,0.9f);
              glVertex2i(240+i,275);
              glVertex2i(180+i,275);
              glVertex2i(180+i,280);
              glVertex2i(240+i,280);
              glEnd();
              glFlush();
            
            glColor3f(0,0,0); // to remove traces create movement of frame in black
            glBegin(GL_QUADS);
            glVertex2i(180-10+i,275);glVertex2i(180-10+i,280);glVertex2i(240-10+i,280);glVertex2i(240-10+i,275);
            glEnd();
            glFlush();
            }
      }
}    
void shutdown()
{
         glBegin(GL_POLYGON);  
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2i(200,200);
            glVertex2i(200,300);
            glVertex2i(300,300);
            glVertex2i(300,200);
            glEnd();
            glFlush();
             glBegin(GL_POLYGON);  // power off
            glColor3f(0.2f,0.2f,0.7f);
            glVertex2i(210,230);
            glVertex2i(210,270);
            glVertex2i(230,270);
            glVertex2i(230,230);
            glEnd();
            glFlush();
            glColor3f(1.0,1.0,1.0);
            drawstring(215.0,250.0,1.0," | ");
            
            glFlush();
             glBegin(GL_POLYGON);  // cancel
            glColor3f(0.2f,0.7f,0.2f);
            glVertex2i(270,230);
            glVertex2i(270,270);
            glVertex2i(290,270);
            glVertex2i(290,230);
            glEnd();
            glFlush();
            glColor3f(1.0,1.0,1.0);
            drawstring(275.0,250.0,1.0," X ");
            glFlush();
}    
void title()                                                                                            // to draw the starting screen
{       float i,j;
            glClear(GL_COLOR_BUFFER_BIT);
            setFont(GLUT_BITMAP_HELVETICA_18);
            glColor3f(1.0,1.0,1.0);
            drawstring(180.0,450.0,1.0,"Computer Graphics and Visualization Mini Project");
            glColor3f(0.3,0.6,0.3);
            glBegin(GL_LINE_LOOP);
            glVertex2i(178.0,448.0);
            glVertex2i(338.0,448.0);
            glEnd();
            glFlush();
            sleep(1);
            glColor3f(1.0,1.0,1.0);
            drawstring(120.0,400.0,1.0,"\"GRAPHICAL IMPLEMENTATION Of SYSTEM USER INTERFACE USING OpenGL\"");
            glFlush();
            glColor3f(1.0,1.0,1.0);
            drawstring(220.0,350.0,1.0," Submitted by :");                          
            
            for(i=0;i<150;i=i+80)
            { 
            glColor3f(1.0,1.0,0.0);
            drawstring(0+i,300.0,1.0,"ABHIJITH M");
            glFlush();
            glColor3f(0.0,0.0,0.0);
            drawstring(-80+i,300.0,1.0,"ABHIJITH M");
            glFlush();
            glColor3f(1.0,1.0,0.0);
            drawstring(420.0-i,300.0,1.0," N S ANUP BHARADWAJ");
            glFlush();
            glColor3f(0.0,0.0,0.0);
            drawstring(500.0-i,300.0,1.0," N S ANUP BHARADWAJ");
            glFlush();
            sleep(1);
            }   
             sleep(1);
             glColor3f(1.0,1.0,0.0);
             drawstring(77.0,280.0,1.0,"(1BY11CS001)");
              glColor3f(1.0,1.0,0.0);
             drawstring(355.0,280.0,1.0,"(1BY11CS039)");
             glFlush();
             glColor3f(1.0,1.0,1.0);
             drawstring(210.0,230.0,1.0,"Under the Guidance of :");
             for(j=0;j<200;j=j+80)
            {
            glColor3f(1.0,1.0,0.0);
            drawstring(70.0,0+j,1.0," Mr. Muneshwara M S");
            glFlush();
            glColor3f(0.0,0.0,0.0);
            drawstring(70.0,-80+j,1.0," Mr. Muneshwara M S");
            glFlush();
            glColor3f(1.0,1.0,0.0);
            drawstring(360.0,0+j,1.0," Ms. Ambika G N");
            glFlush();
            glColor3f(0.0,0.0,0.0);
            drawstring(360.0,-80+j,1.0," Ms. Ambika G N");
            glFlush();
            sleep(1);
            }
            
            setFont(GLUT_BITMAP_HELVETICA_12);
            glColor3f(1.0,0.0,1.0);
            drawstring(83.0,140.0,1.0,"Assistant Professor");
            glFlush();
            glColor3f(1.0,0.0,1.0);
            drawstring(367.0,140.0,1.0,"Assistant Professor");
            glFlush();
            setFont(GLUT_BITMAP_HELVETICA_18);
            glColor3f(1.0,0.0,1.0);
            drawstring(190.0,120.0,1.0," Computer Science and Engineering");
            glFlush();
            glColor3f(1.0,0.0,1.0);
            drawstring(230.0,100.0,1.0," B M S I T ");
            glFlush();
            //draw_key_int();
            
            setFont(GLUT_BITMAP_TIMES_ROMAN_24);
            glColor3f(0.0,1.0,1.0);
            drawstring(400.0,50.0,1.0,"Press Y to Boot");
            glFlush();
}    
void mykeyboard(unsigned char key,int x,int y)
    {  
        if(key=='y' || key=='Y')
            {      
                   glClear(GL_COLOR_BUFFER_BIT);
                   text();
                   draw();
            }
        if(key=='N' || key=='n')
                    exit(0);
        if(key=='P' || key=='p')
           {       
                   glClear(GL_COLOR_BUFFER_BIT);
                   desktop();  
           }
        if(key=='B' || key=='b')
           {       
                   glClear(GL_COLOR_BUFFER_BIT);
                   glClearColor(0.0,0.0,0.0,0.0);
                   desktop();  
           }
        if(key=='t' || key=='T')
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
        {
         glClear(GL_COLOR_BUFFER_BIT);
         glClearColor(0.0,0.0,0.0,0.0);
         howsearchworks2();
        }
        if(key=='3')
        {
         glClear(GL_COLOR_BUFFER_BIT);
         glClearColor(0.0,0.0,0.0,0.0);
         howsearchworks3();       
        }    
        if(key=='4')
        {
         glClear(GL_COLOR_BUFFER_BIT);
         glClearColor(0.0,0.0,0.0,0.0);
         howsearchworks4();
        }
        if(key == 'C')
        { 
         glClear(GL_COLOR_BUFFER_BIT);
         what();      
        }
        if(key=='w' || key == 'W')
        {
         glClear(GL_COLOR_BUFFER_BIT);
         internetmean();
        }
        if(key=='c')
        {
         glClear(GL_COLOR_BUFFER_BIT);
         work();
        }
        if(key=='h' || key=='H')
        {
         glClear(GL_COLOR_BUFFER_BIT);
         internetwork();
        }
}
void myMouse(int btn, int state, int x, int y)
{       
     if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
            {      
                    x=x/2.732;
                    y=(768-y)/1.536;
                    if ((x>=30.0 && x<=60.0) && (y>=350.0 && y<=380.0 ))// icon 1
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
                  sleep(1);
                  conversation();                           
                    }
                    if((x>=30.0 && x<=60.0) && (y>=270.0 && y<=300.0 ))//   2 menu
                    {       glBegin(GL_POLYGON);
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
                    if((x>=30.0 && x<=60.0) && (y>=190.0 && y<=220.0 ))  // icon 3
                    {
                      glBegin(GL_POLYGON);
                        glColor3f(1,1,1);
                        glVertex2f(30,190);
                        glVertex2f(30,220);
                        glVertex2f(60,220);
                        glVertex2f(60,190);
                        glEnd();
                        glFlush();
                        sleep(1);
                     internettext();
                    }
                    if((x>=0.0 && x<=50.0) && (y>=0.0 && y<=20.0 ))  // shut down
                    {
                     shutdown();
                    }
                    if((x>=270.0 && x<=290.0) && (y>=230.0 && y<=270.0 ))  // icon 3
                    {
                     glClear(GL_COLOR_BUFFER_BIT);
                     desktop();
                    }
                    if((x>=210.0 && x<=230.0) && (y>=230.0 && y<=270.0 ))  // icon 3
                    {
                     glClear(GL_COLOR_BUFFER_BIT);
                     exit(0);
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
            glutInitWindowSize(1366,768);
            glutCreateWindow("System User Interface");
            glutDisplayFunc(display);
            glutMouseFunc(myMouse);
            glutKeyboardFunc(mykeyboard);
            myInit();
            glutMainLoop();
            return 1;
}
