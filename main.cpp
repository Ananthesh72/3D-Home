
#include <windows.h>
#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include <GL/glut.h>
#include <cmath>
#include <string>
#include <math.h>
using namespace std;
static double x= 0.0,y=0.0,z=0.0;
static float camx,rotateCam=20,rotateTop = 0.0f;
static float camy=-4.0f,camz= -20.0f;
static float ang = 0;
static bool lights= false;
static bool isHut =true;
static float r=0,g=0,b=0;
double w=1280,h=720;


void floor(){

 glColor3f(1.0f, 0.1f,0.1f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glBegin(GL_POLYGON);
                                    // right panel of house
        glColor3d(0,0,1);
        glVertex3d(3, 0, 0);
        glVertex3d(0.5, 0, 0);
        glVertex3d(0.5, 2, 0);
        glVertex3d(3, 2, 0);
        glEnd();

        glPushMatrix();             // insert the CTM into stack
        glTranslatef(1,0,0);        // Translate along the x-axis
        glRotatef(ang,0,1,0);

        glBegin(GL_POLYGON);               //door
        glColor3f(1.0,1.0,0.0);
        glVertex3d(-0.5, 0, 0);
        glVertex3d(-0.5, 2, 0);
        glVertex3d(-1.5, 2, 0);
        glVertex3d(-1.5, 0, 0);
        glEnd();

        glPopMatrix();// Left panel of house
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(-3, 0, 0);
        glVertex3d(-0.5, 0, 0);
        glVertex3d(-0.5, 2, 0);
        glVertex3d(-3, 2, 0);
        glEnd();
                                    //wall above door
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(-3, 2, 0);
        glVertex3d(-3, 3, 0);
        glVertex3d(3, 3, 0);
        glVertex3d(3, 2, 0);
        glEnd();
                                    //right side wall
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex3d(3, 0, 0);
        glVertex3d(3, 0, -5);
        glVertex3d(3, 3, -5);
        glVertex3d(3, 3, 0);
        glEnd();
                                        //right wall window
        glBegin(GL_POLYGON);
        glColor3f(1,1,0);
        glVertex3d(3.1, 1, -2);
        glVertex3d(3.1, 1, -3);
        glVertex3d(3.1, 2, -3);
        glVertex3d(3.1, 2, -2);
        glEnd();
                                                    //back wall
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(3, 0, -5);
        glVertex3d(3, 3, -5);
        glVertex3d(-3, 3, -5);
        glVertex3d(-3, 0, -5);
        glEnd();
                                        //left side wall
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex3d(-3, 0, 0);
        glVertex3d(-3, 0, -5);
        glVertex3d(-3, 3, -5);
        glVertex3d(-3, 3, 0);
        glEnd();
                        //// adding floors to home



}
void floorADD()
{
    glBegin(GL_POLYGON);
                                    // right panel of house
        glColor3d(0,0,1);
        glVertex3d(3, 0, 0);
        glVertex3d(0.5, 0, 0);
        glVertex3d(0.5, 2, 0);
        glVertex3d(3, 2, 0);
        glEnd();

        glPushMatrix();             // insert the CTM into stack
        glTranslatef(1,1,0);        // Translate along the x-axis
        glRotatef(ang,0,1,0);

        glBegin(GL_POLYGON);               //door
        glColor3f(1.0,1.0,0.0);
        glVertex3d(-0.5, 0, 0);
        glVertex3d(-0.5, 2, 0);
        glVertex3d(-1.5, 2, 0);
        glVertex3d(-1.5, 0, 0);
        glEnd();

        glPopMatrix();// Left panel of house
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(-3, 0, 0);
        glVertex3d(-0.5, 0, 0);
        glVertex3d(-0.5, 2, 0);
        glVertex3d(-3, 2, 0);
        glEnd();
                                    //wall above door
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(-3, 2, 0);
        glVertex3d(-3, 3, 0);
        glVertex3d(3, 3, 0);
        glVertex3d(3, 2, 0);
        glEnd();
                                    //right side wall
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex3d(3, 0, 0);
        glVertex3d(3, 0, -5);
        glVertex3d(3, 3, -5);
        glVertex3d(3, 3, 0);
        glEnd();
                                        //right wall window
        glBegin(GL_POLYGON);
        glColor3f(1,1,0);
        glVertex3d(3.1, 1, -2);
        glVertex3d(3.1, 1, -3);
        glVertex3d(3.1, 2, -3);
        glVertex3d(3.1, 2, -2);
        glEnd();
                                                    //back wall
        glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(3, 0, -5);
        glVertex3d(3, 3, -5);
        glVertex3d(-3, 3, -5);
        glVertex3d(-3, 0, -5);
        glEnd();
                                        //left side wall
        glBegin(GL_POLYGON);
        glColor3f(0,1,0);
        glVertex3d(-3, 0, 0);
        glVertex3d(-3, 0, -5);
        glVertex3d(-3, 3, -5);
        glVertex3d(-3, 3, 0);
        glEnd();

}


void floor2(){

 glColor3f(0.7f, 0.4f, 0.0f);
        glBegin(GL_POLYGON);
                                    // right panel of house
        glVertex3d(3, 0, 0);
        glVertex3d(0.5, 0, 0);
        glVertex3d(0.5, 1.5, 0);
        glVertex3d(3, 1.5, 0);
        glEnd();
        glPushMatrix();             // insert the CTM into stack
        glTranslatef(1,0,0);        // Translate along the x-axis
        glRotatef(ang,0,1,0);
        /*glBegin(GL_POLYGON);               //door
        glColor3f(1.0,1.0,0.0);
        glVertex3d(-0.5, 0, 0);
        glVertex3d(-0.5, 2, 0);
        glVertex3d(-1.5, 2, 0);
        glVertex3d(-1.5, 0, 0);
        glEnd();*/

        glPopMatrix();// Left panel of house
        glBegin(GL_POLYGON);
        glVertex3d(-3, 0, 0);
        glVertex3d(-0.5, 0, 0);
        glVertex3d(-0.5, 1.5, 0);
        glVertex3d(-3, 1.5, 0);
        glEnd();
                                    //wall above door
        /*glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex3d(-3, 2, 0);
        glVertex3d(-3, 3, 0);
        glVertex3d(3, 3, 0);
        glVertex3d(3, 2, 0);
        glEnd();*/
                                    //right side wall
        glBegin(GL_POLYGON);
        glVertex3d(3, 0, 0);
        glVertex3d(3, 0, -5);
        glVertex3d(3, 1.5, -5);
        glVertex3d(3, 1.5, 0);
        glEnd();
                                        //right wall window
        /*glBegin(GL_POLYGON);
        glColor3f(1,0.5,0);
        glVertex3d(3.1, 0.5, -2);
        glVertex3d(3.1, 0.5, -3);
        glVertex3d(3.1, 2, -3);
        glVertex3d(3.1, 2, -2);
        glEnd();*/
                                                    //back wall
        glBegin(GL_POLYGON);
        glVertex3d(3, 0, -5);
        glVertex3d(3, 1.5, -5);
        glVertex3d(-3, 1.5, -5);
        glVertex3d(-3, 0, -5);
        glEnd();
                                        //left side wall
        glBegin(GL_POLYGON);
        glVertex3d(-3, 0, 0);
        glVertex3d(-3, 0, -5);
        glVertex3d(-3, 1.5, -5);
        glVertex3d(-3, 1.5, 0);
        glEnd();
}
void hut(){
glColor3f(1.0f, 1.0f, 0.0f);                    // front trinangle
glBegin(GL_POLYGON);
glColor3d(1,0,0);
glVertex3d(3.5, 3, 0);
glVertex3d(0, 5, 0);
glVertex3d(-3.5, 3, 0);
glEnd();

// back triangle
glBegin(GL_POLYGON);
glColor3d(1,0,0);
glVertex3d(3.5, 3, -5);
glVertex3d(0, 5, -5);
glVertex3d(-3.5, 3, -5);
glEnd();

//left roof
glBegin(GL_POLYGON);
glColor3d(1,0,0);
glVertex3d(-3.5, 3, 0);
glVertex3d(0, 5, 0);
glVertex3d(0, 5, -5);
glVertex3d(-3.5, 3, -5);
glEnd();

//right roof
glBegin(GL_POLYGON);
glColor3d(1,0,0);
glVertex3d(3.5, 3, 0);
glVertex3d(0, 5, 0);
glVertex3d(0, 5, -5);
glVertex3d(3.5, 3, -5);
glEnd();

}
void home() // Draw home
{
	glClearColor(r,g,b,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(camx,camy,camz);
	glPushMatrix();
	glTranslatef(0,0,-16.0);
	glRotatef(rotateCam,0.0f,1.0f,0.0f);
	floor();
	glPushMatrix();
	glTranslatef(0,3,-2);
	glRotatef(rotateCam,0.0f,0.0f,0.0f);
	floorADD();
	glPushMatrix();
    glTranslatef(0,0,5);
    glScaled(2, 1, 3);
    floor2();
    glPopMatrix();
	if(isHut){
    hut();
	}
	glPopMatrix();
	glFlush();
    glutSwapBuffers();
}
void cw()               //clockwise rotation of home
{
    rotateCam+=0.05;
    home();
}
void anticw()           //anticlockwise rotation of home
{
	rotateCam-=0.05;
    home();
  }
  void pause()
{
home();
}
void Init()
{
    glClearColor(0.8,0.8,0.8,0);
    glViewport(500,0,0,480);            // camera angle
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0f,(GLfloat)640/(GLfloat)480,0.1f,200.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClearDepth(2.0f);
   glEnable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
  glDepthFunc(GL_LEQUAL);
}

void display()
{
	glClearColor(0.3,0.3,0.3,0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();//reseting the transformation
	glTranslatef(0.0f,0.0f,-13.0f);
	glPushMatrix();
	glScaled(0.8,0.8,0.8);
	glTranslatef(-2,0,0);
	glPopMatrix();

	GLfloat mat_ambient[]={0.0f,1.0f,2.0f,1.0f};
	GLfloat mat_diffuse[]={1.0f,1.5f,.5f,1.0f};
	GLfloat mat_specular[]={5.0f,1.0f,1.0f,1.0f};
	GLfloat mat_shininess[]={100.0f};
	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
   //glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

	GLfloat lightIntensity[]={1.4f,1.7f,1.7f,1.0f};       // front light
	GLfloat light_position[]={0.0f,10.0f,200.0f,0.0f};
	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

                                            //back light
	GLfloat lightIntensity2[]={1.7f,1.7f,1.7f,1.0f};
	GLfloat light_position2[]={0.0f,10.0f,-200.0f,0.0f};
	glLightfv(GL_LIGHT1,GL_POSITION,light_position2);
	glLightfv(GL_LIGHT1,GL_DIFFUSE,lightIntensity2);
                                                        //right light
	GLfloat lightIntensity3[]={1.0f,1.0f,1.0f,1.0f};
	GLfloat light_position3[]={200.0f,10.0f,0.0f,0.0f};
	glLightfv(GL_LIGHT2,GL_POSITION,light_position3);
	glLightfv(GL_LIGHT2,GL_DIFFUSE,lightIntensity3);

                                                //left light
	GLfloat lightIntensity4[]={1.0f,1.0f,1.0f,1.0f};
	GLfloat light_position4[]={-200.0f,10.0f,0.0f,0.0f};
    glLightfv(GL_LIGHT3,GL_POSITION,light_position4);
	glLightfv(GL_LIGHT3,GL_DIFFUSE,lightIntensity4);

	glEnable(GL_COLOR_MATERIAL);
	glFlush();
	glutSwapBuffers();
}


void menu(int id)
{
	switch(id)
	{
	case 1:glutIdleFunc(cw);
		break;
	case 2:glutIdleFunc(anticw);
		break;
	case 3:glutIdleFunc(pause);
	break;
    case 4:glutIdleFunc(home);
        r=1.0;    // white bg
        g = 1.0;
        b = 1.0;
        break;
    case 5:glutIdleFunc(home);
        r = 0.0;       // black bg
        g = 0.0;
        b = 0.0;
            break;

    case 6:exit(0);
		break;
	}
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}
void mykey(unsigned char key,int x,int y)
{
	if(key=='p' || key=='P')
	{
		glutIdleFunc(pause);
	}
if(key=='x')
	{
		camx+=0.5;
	}
if(key=='X')
	{
		camx-=0.5;
	}
if(key=='y')
	{
		camy+=0.5;

	}
if(key=='Y')
	{
		camy-=0.5;
	}

if(key=='w')
	{
		camz+=0.5;
	}
	if(key=='s')
	{
	    camz-=0.5;
	}
	if(key=='d')
	{
		rotateCam+=0.5;
	}
	if(key=='a')
	{
		rotateCam-=0.5;
	}
	if(key=='q'||key=='Q')
	{
		exit(0);
	}
	if(key=='o'||key=='O')
	{
		ang++;
	}
	if(key=='c'||key=='C')
	{
		ang--;
	}
		/*		if(key=='b')
        {
			b+=0.1;
			if(b>1){
			b=1;     //reached highest possible limit
			}

	}
	if(key=='B')
	{
			b-=0.1;
			if(b<0){ //reached lowest possible limit
			b=0;
			}
	}
		if(key=='r')
	{
			r+=0.1;
        if(r>1){
			r=1;     //reached highest possible limit
			}
	}
			if(key=='R')
	{
			r-=0.1;
			if(r<0){ //reached lowest possible limit
			r=0;
			}

	}
	if(key=='g')
	{
			r+=0.1;
        if(r>1){
			r=1;     //reached highest possible limit
			}
	}
			if(key=='G')
	{
			r-=0.1;
			if(r<0){ //reached lowest possible limit
			r=0;
			}
	}*/
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GL_DEPTH_BUFFER_BIT);
    glutInitWindowSize(1000,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("3D home");
    glutIdleFunc(home);
    glutDisplayFunc(display);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);  // front light
	glEnable(GL_LIGHT1);  // back light
    glEnable(GL_LIGHT2);		// left light
    glEnable(GL_LIGHT3);	// right light
    glShadeModel(GL_SMOOTH);
	glutKeyboardFunc(mykey);
	glutCreateMenu(menu);
    glutAddMenuEntry("Rotate Modal clockwise",1);
	glutAddMenuEntry("Rotate Modal AntiClockwise",2);
	glutAddMenuEntry("pause rotation'p'",3);
	glutAddMenuEntry("White background",4);
	glutAddMenuEntry("black background",5);
	glutAddMenuEntry("Quit  'q'",6);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	Init();
    glutMainLoop();
	return 0;
}
