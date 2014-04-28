#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<unistd.h>

//Bubble Sort

#define MAX 5
int k=0;
typedef struct circle
{
    GLfloat x;  //x axis of center
    GLfloat y;  //y axis of center
    GLfloat r;  // radius
}circle;

circle c[MAX];  //array of circles to store the center and radius of each circle
int a[MAX];     // int array for sorting algo
int initial[MAX] = {4,3,1,5,2};  //int array to restore random values after sorting
GLfloat initial_x1,initial_x2;  //to set the destiniation for swapping

int global_i = 0, global_j = 0; //i and j values for bubble-sort
int swapping = 0;   //flag to check if circle are being swapped
int sorting = 0;    //start sorting only after user input

void initialise()
{
    global_i = global_j = swapping = 0; //reset all globals
    for (int i=0;i<MAX;i++)
    {
        a[i] = initial[i];  //if a[] is sorted restore from initial[] 
        c[i].r = a[i]*2.0;  //4 because to fit 10 circles in screen
        c[i].y = 250.0;     //vertical center of window
        if (i == 0)
            c[i].x = 150.0;  // first circle starts from 45 offset
        else
            c[i].x = c[i-1].x + 50.0;//(c[i-1].r+c[i].r+10.0); //distance between circles = sum of 2 max readii
        printf("%f - %f - %f\n",c[i].x,c[i].y,c[i].r); //for testing purpose don worry
    }
}
//func to display text on screen char by char
void bitmap_output(int x, int y, char *string, void *font)
{
  int len, i;

  glRasterPos2f(x, y);
  len = (int) strlen(string);
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(font, string[i]);
  }
}

//function to integer to string
void int_str(int rad,char r[])
{
    switch(rad)
    {
        case 1 : strcpy(r, "1"); break;
        case 2 : strcpy(r, "2"); break;
        case 3 : strcpy(r, "3"); break;
        case 4 : strcpy(r, "4"); break;
        case 5 : strcpy(r, "5"); break;
    }
    
}

//draw circle by drawing consecutive triangle fans
void circle_draw(circle c)
{
    float i;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c.x, c.y);   //center of circle
    for (i=0;i<360;i+=1)
        glVertex2f(c.x + sin(i) * c.r, c.y + cos(i) * c.r);
    glEnd();    
}
// swaps circles cc1 and cc2 by changing their centers
void swap_circles(circle *cc1,circle *cc2)
{
    if (swapping == 0)  //if circles are not being swapped set destination for each circles
    {
        initial_x1 = cc1->x; //center of circle in left
        initial_x2 = cc2->x; //center of circle in right
        swapping = 1;   //means cicle are being swapped
        printf("%f - %f\n",cc1->r,cc2->r);
        
    }

    if (initial_x1 <= cc2->x)   //decrease the center of circle in right till its > center of left circle
        cc2->x -= 1.0;      //speed of animation

    if (initial_x2 >= cc1->x)//increase the center of circle in left till its < center of right circle
        cc1->x += 1.0;

    printf("one %f - %f\n",initial_x1,cc2->x);
    printf("two %f - %f\n",initial_x2,cc1->x);

    // if difference between destination and center < 0.3 then cicles are swapped
    if (abs(initial_x1-cc2->x) < 0.3 && abs(initial_x2-cc1->x) < 0.3)  //set this to speed of animation
    {
        swapping = 0;
    
        int temp = cc1->x;
        cc1->x = cc2->x;
        cc2->x = temp;

        temp = cc1->y;
        cc1->y = cc2->y;
        cc2->y = temp;

        temp = cc1->r;
        cc1->r = cc2->r;
        cc2->r = temp;
    }
    
}


void sort() //bubble sort algo
{
    if (!swapping) //if not in process of swappin 2 circles only then get 2 new circles to swap
    {
        while (global_i < 5)
        {
            global_j = global_i;
            while (global_j < 4)
            {
                if (a[global_j] > a[global_j+1])
                {
                    printf("%d %d\n",global_j,a[global_j]);
                    int temp = a[global_j];
                    a[global_j] = a[global_j+1];
                    a[global_j+1] = temp;
                    goto SWAP;
                    
                }
                global_j ++;
            }
            global_i ++;
        }
    }
SWAP:
    printf("swapping --> %d - %d\n",global_j,global_j+1);
    bitmap_output(10, 375, "Swapping ->",GLUT_BITMAP_9_BY_15);
    
    char r[3]="";
    int_str(a[global_j],r);
    bitmap_output(150, 375, r,GLUT_BITMAP_9_BY_15);
    int_str(a[global_j+1],r);
    bitmap_output(175, 375, r,GLUT_BITMAP_9_BY_15);

    swap_circles(&c[global_j],&c[global_j+1]);
}

void display_text()
{
    //other text small font
    bitmap_output(50, 160,"This Program Sorts a Random set of numbers in Ascending Order Displaying them graphically as Circles with Varying Radii !!! ",GLUT_BITMAP_9_BY_15);
    bitmap_output(150, 130, "The Given Order Of Circles Is . . . 4 3 1 5 2",GLUT_BITMAP_9_BY_15);
    bitmap_output(170, 110, "Press Enter To Begin ...",GLUT_BITMAP_9_BY_15);

    
    if (sorting == 0)//if not sorting display menu
    {
        bitmap_output(200, 90, "         MENU",GLUT_BITMAP_9_BY_15);
        bitmap_output(200, 70, "-> Press s to SORT",GLUT_BITMAP_9_BY_15);
        bitmap_output(200, 50, "-> Press r to RANDOMISE",GLUT_BITMAP_9_BY_15);
        bitmap_output(200, 30, "-> Esc to QUIT",GLUT_BITMAP_9_BY_15);
    }
    else if (sorting == 1)
    {
        glColor3f(0.5,0.5,0.5);
        bitmap_output(200, 180, "Sorting in progress...",GLUT_BITMAP_9_BY_15);
        bitmap_output(200, 160, "Please do not quit",GLUT_BITMAP_9_BY_15);
        glColor3f(0.0,0.0,0.0);
    }
    
}

void front()
{
    glColor3f(0.3,0.7,0.5);
    bitmap_output(220, 470, "WELCOME",GLUT_BITMAP_TIMES_ROMAN_24);
    glEnd();
    bitmap_output(240, 420, "TO",GLUT_BITMAP_TIMES_ROMAN_24);
    glEnd();
    bitmap_output(150, 370, "DYNAMIC SORTING ALGORITHM VISUALISER",GLUT_BITMAP_TIMES_ROMAN_24);
    glEnd();
        
}

void display1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    if (k==0)
    front();    
    display_text();    
    glPointSize(2.0);
    for (int i=0;i<MAX;i++)
    {
        glColor3f(1.0,1.0,0.0);
        circle_draw(c[i]);
    }
    if (global_j+1 < MAX && sorting == 1) // call sort only on key press
        sort();
    else
        sorting = 0;    
    glFlush();
    glutSwapBuffers();

}
void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity();
    if(w<=h) 
        glOrtho(-2.0, 2.0, -2.0 * (GLfloat) h/ (GLfloat) w, 2.0* (GLfloat) h / (GLfloat) w, -10.0, 10.0);
    else 
        glOrtho(-2.0 * (GLfloat) w/ (GLfloat) h, 2.0* (GLfloat) w / (GLfloat) h, -2.0, 2.0, -10.0, 10.0);

    glMatrixMode(GL_MODELVIEW);
}
void init(void)
{
        glClearColor(0.0,0.0,0.0,0.0);
        glMatrixMode(GL_PROJECTION);
        gluOrtho2D(0.0,500.0,0.0,500.0);
}
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
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(0.45,0.45,0.45);
         glBegin(GL_QUADS);
         glVertex2f(360,210);
         glVertex2f(400,210);
         glVertex2f(400,250);
         glVertex2f(360,250);
         glEnd();
         
         glColor3f(0,0,0);
         glBegin(GL_QUADS);
         glVertex2f(365,215);
         glVertex2f(395,215);
         glVertex2f(395,245);
         glVertex2f(365,245);
         glEnd();
         
         glColor3f(1,1,1);
         glBegin(GL_QUADS);
         glVertex2f(371,210);
         glVertex2f(390,210);
         glVertex2f(390,200);
         glVertex2f(371,200);
         glEnd();
         glFlush();
         for(i=0;i<200;i=i+1) 
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
        glPointSize(1.0);
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
        glColor3f(1,0,0);
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
        if(key==13)
              k=1;
        if (k==1)
        {
              switch (key)
              {
                case 27 : exit (0); //27 is the ascii code for the ESC key
                case 's' : sorting = 1; break;
                case 'r' : initialise(); break;
              }
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
     
void myMouse(int btn, int state, int x, int y)
{       
        if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
        {
                x=x/2.88;
                y=(900-y)/1.8;       
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
                glBegin(GL_POLYGON);
                glColor3f(0.2f,1.0f,0.5f);
                glVertex2i(60.0,220.0);
                glVertex2i(30.0,220.0);
                glVertex2i(30.0,190.0);
                glVertex2i(60.0,190.0);
                glEnd();
                glFlush();
                sleep(2);
                glClear(GL_COLOR_BUFFER_BIT);
                glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
                glutInitWindowPosition(0,0);
                glutInitWindowSize(1366,768);
                glutCreateWindow("Dynamic Sorting Algorithm Visualiser");
                        init();
                initialise();       
                glutDisplayFunc(display1);
                glutIdleFunc(display1);
                glutMainLoop();                   
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
