	

    #include<stdio.h>
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
           
          //  glClear(GL_COLOR_BUFFER_BIT);
            glBegin(GL_POLYGON);
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2i(30,380);
            glVertex2i(30,350);
            glVertex2i(60,350);
            glVertex2i(60,380);
            glEnd();
            glFlush();
            glBegin(GL_POLYGON);
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2i(30,330);
            glVertex2i(30,300);
            glVertex2i(60,300);
            glVertex2i(60,330);
            glEnd();
            glFlush();
            glBegin(GL_POLYGON);
            glColor3f(0.7f,0.2f,0.2f);
            glVertex2i(30,280);
            glVertex2i(30,250);
            glVertex2i(60,250);
            glVertex2i(60,280);
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
    {  if(key=='y' || key=='Y')
            {      glClear(GL_COLOR_BUFFER_BIT);
                   draw();
                   text();
            }
        else if(key=='N' || key=='n')
                    exit(0);
       else if(key=='P' || key=='p')
           {       glClear(GL_COLOR_BUFFER_BIT);
                   text1();  
               
           }
    }
     
    void myMouse(int btn, int state, int x, int y)
    {       if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
            {
                    x=x/2;
                    y=(1000-y)/2.1;
                    if ((x>=180 && x<=305) && (y>=395 && y<=425 ))// 1 menu
                    {       glClear(GL_COLOR_BUFFER_BIT);
                    glColor3f(1.0,1.0,1.0);
                            //mobile_stn(1);
                            draw_key_int();
                            glBegin(GL_QUADS);
                             glColor3f(0.2,.2,0.2);
                                     glVertex2f(75.0+20,30.0);
                                     glVertex2f(100.0+20,30.0);
                                     glVertex2f(100.0+20,90.0);
                                     glVertex2f(75.0+20,90.0);
                                    glEnd();
                                    glBegin(GL_QUADS);
                             glColor3f(.5,0.1,.4);
                             glVertex2f(120,90);
                                     glVertex2f(120,110);
                                     glVertex2f(115,110);
                                     glVertex2f(115,90);
                                    glEnd();
                                    glBegin(GL_QUADS);
                             glColor3f(0,01,0);
                             glVertex2f(100-3,80+4);
                                     glVertex2f(100-3,60);
                                     glVertex2f(115+3,60);
                                     glVertex2f(115+3,80+4);
                                    glEnd();
     
     
                            glFlush();
                    }
                    if((x>=180 && x<=305) && (y>=354 && y<=375 ))//   2 menu
                    {       glClear(GL_COLOR_BUFFER_BIT);
                            glColor3f(1.0,1.0,1.0);
                            //mobile_stn(2);
                            draw_key_int();
                    }
                    if((x>=180 && x<=305) && (y>=311 && y<=333 ))  // 3 menu
                    {
                    glClear(GL_COLOR_BUFFER_BIT);
                    glColor3f(1.0,1.0,1.0);
                    //help();
                    //draw_key_int1();
                    //scanf("%d",&helpf);
                     //helpf=0;
                     glClear(GL_COLOR_BUFFER_BIT);
                     glClearColor(0.0,0.0,0.0,0.0);
                     //help2();
                     draw_key_int();
     
     
     
                    }
                    if((x>=180 && x<=305) && (y>=269 && y<=293 ))  // 4 menu
                    {
                            exit(0);
                    }
     
     
     
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
            glutInitWindowSize(700,700);
            glutCreateWindow("System User Interface");
            glutDisplayFunc(display);
            glutMouseFunc(myMouse);
            glutKeyboardFunc(mykeyboard);
            myInit();
            glutMainLoop();
       
    return 1;
    }

