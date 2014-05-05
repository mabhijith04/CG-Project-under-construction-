#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<unistd.h>
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
         glColor3f(0.60,0.40,0.70);
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
void mykeyboard(unsigned char key,int x,int y)
{  
       
         if(key=='N' || key=='n')
                   exit(0);
        
        
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

int main(int argc,char **argv)
{
            glutInit(&argc,argv);
            glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
            glutInitWindowPosition(0,0);
            glutInitWindowSize(1440,900);
            glutCreateWindow("System User Interface");
            glutDisplayFunc(howsearchworks);
            glutKeyboardFunc(mykeyboard);
            glEnable(GL_DEPTH_TEST);
            myInit();
            glutMainLoop();
            return 1;
}
