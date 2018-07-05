#include<GL\glut.h>
#include<math.h>

float _angle1 = 30.0f;
float _angle2 = 0.2f;
float _angle3 = 0.0f;
float _angle4 = 0.0f;
float speed = 3.0f;
float speed2 = 3.0f;

void handleKeypress(unsigned char key, int x, int y) {

    switch(key){
        case 27:
            exit(0);
        default:
            break;
    }
    glutPostRedisplay();
}

void idle() {
   glutPostRedisplay();   // Post a re-paint request to activate display()
}

void init(void)
{
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-200.0, 200.0, -200.0, 200.0);
}
void initRendering() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING); //Enable lighting
    glEnable(GL_LIGHT0); //Enable light #0
    glEnable(GL_LIGHT1); //Enable light #1


}

void House()
{
    glBegin(GL_POLYGON);  //start window
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(60, 80);
	glVertex2i(80, 80);
	glVertex2i(80, 65);
	glVertex2i(60, 65);
	glEnd();   //end window

	glBegin(GL_POLYGON);  //start window
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(120, 80);
	glVertex2i(140, 80);
	glVertex2i(140, 65);
	glVertex2i(120, 65);
	glEnd();   //end window



	glBegin(GL_POLYGON); //start ceiling
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.5, 0.0, 0.3);
	glVertex2i(150, 100);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 130);
	glEnd(); //end ceiling

	glBegin(GL_POLYGON);  //start door
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(80, 0);
	glVertex2i(80, 50);
	glVertex2i(120, 50);
	glVertex2i(120,0);
	glEnd();  //end door


    glBegin(GL_POLYGON);  //start house
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(50, 0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(150, 100);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(150,0);
	glEnd();   //end house
}
void HouseNight()
{
    glBegin(GL_POLYGON);  //start window
	glColor3f(1.0, 1.0, 0.5019);
	glVertex2i(60, 80);
	glVertex2i(80, 80);
	glVertex2i(80, 65);
	glVertex2i(60, 65);
	glEnd();   //end window

	glBegin(GL_POLYGON);  //start window
	glColor3f(1.0, 1.0, 0.5019);
	glVertex2i(120, 80);
	glVertex2i(140, 80);
	glVertex2i(140, 65);
	glVertex2i(120, 65);
	glEnd();   //end window



	glBegin(GL_POLYGON); //start ceiling
	glColor3f(0.9, 0.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.8, 0.0, 0.3);
	glVertex2i(150, 100);
	glColor3f(0.4, 0.0, 0.0);
	glVertex2i(100, 130);
	glEnd(); //end ceiling

	glBegin(GL_POLYGON);  //start door
	glColor3f(0.6, 0.4, 0.0);
	glVertex2i(80, 0);
	glVertex2i(80, 50);
	glVertex2i(120, 50);
	glVertex2i(120,0);
	glEnd();  //end door


    glBegin(GL_POLYGON);  //start house
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(50, 0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(150, 100);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(150,0);
	glEnd();   //end house
}
void tree()
{
    glColor3f(0.545098, 0.270588, 0.0745098);
	glBegin(GL_POLYGON);
	glVertex2f(5,0);
	glVertex2f(5,70);
	glVertex2f(-5,70);
	glVertex2f(-5,0);
	glEnd();

	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(45,70);
	glVertex2i(15,85);
	glVertex2i(-15,85);
	glVertex2i(-45,70);
	glEnd();
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(40,85);
	glVertex2i(10,100);
	glVertex2i(-10,100);
	glVertex2i(-40,85);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(35,100);
	glVertex2i(0,115);
	glVertex2i(-35,100);

	glEnd();

}

void background()
{
    glBegin(GL_POLYGON);  //start green land
	glColor3f(0.0, 0.1, 0.0);
	glVertex2i(-200, -20);
	glVertex2i(200, -20);
	glVertex2i(200, 90);
	glVertex2i(-200, 90);
	glEnd();   //end green land

    glBegin(GL_POLYGON);  //start green land after road
	glColor3f(0.0, 0.1, 0.0);
	glVertex2i(-200, -120);
	glVertex2i(-200, -200);
	glVertex2i(200,-200);
	glVertex2i(200,-120);
	glEnd();   //end green land after road


    glBegin(GL_POLYGON);  //start sky
	glColor3f(0.1, 0.1, 0.1);
	glVertex2i(200, 65);
    glVertex2i(200, 200);
    glVertex2i(-200,200);
	glVertex2i(-200, 65);
	glVertex2i(200, -20);
	glEnd();   //end sky

}
void backgroundDay()
{
    glBegin(GL_POLYGON);  //start green land
	glColor3f(0.0, 0.9, 0.0);
	glVertex2i(-200, -20);
	glVertex2i(200, -20);
	glVertex2i(200, 90);
	glVertex2i(-200, 90);
	glEnd();   //end green land

    glBegin(GL_POLYGON);  //start green land after road
	glColor3f(0.0, 0.9, 0.0);
	glVertex2i(-200, -120);
	glVertex2i(-200, -200);
	glVertex2i(200,-200);
	glVertex2i(200,-120);
	glEnd();   //end green land after road

    glBegin(GL_POLYGON);  //start sky
	glColor3f(0.03, 0.73, 0.96);
	glVertex2i(200, 65);
    glVertex2i(200, 200);
    glVertex2i(-200,200);
	glVertex2i(-200, 65);

	glVertex2i(200, -20);
	glEnd();   //end sky

}
void road()
{

	glBegin(GL_POLYGON);  //start door
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(-200, -20);
	glVertex2i(-200, -120);
	glVertex2i(200,-120);
	glVertex2i(200,-20);
	glEnd();  //end door


}
void devider()
{
 glPushMatrix();
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);

    glVertex2f(-200,-70);
    glVertex2f(-180,-70);
    glVertex2f(-160,-70);
    glVertex2f(-140,-70);
    glVertex2f(-120,-70);
    glVertex2f(-100,-70);
    glVertex2f(-80,-70);
    glVertex2f(-60,-70);
    glVertex2f(-40,-70);
    glVertex2f(0,-70);
    glVertex2f(40,-70);
    glVertex2f(60,-70);
    glVertex2f(80,-70);
    glVertex2f(120,-70);
    glVertex2f(140,-70);
    glVertex2f(160,-70);
    glVertex2f(180,-70);
    glVertex2f(200,-70);
	glEnd();
    glPopMatrix();
}
void pond()
{
    glBegin(GL_POLYGON);  //start door
	glColor3f(0.113, 0.847, 0.7764);

	glVertex2i(-200,85);
	glVertex2i(-100,75);
	glVertex2i(-70,60);
	glVertex2i(-50,40);
	glVertex2i(-70,20);
	glVertex2i(-100,5);
	glVertex2i(-200,-20);
	glEnd();  //end door


}
void wheel1()
{


   glRotatef(_angle3,0.0, 0.0, 1.0);
	glTranslatef(-200.8,-60.0, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=10.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
}
void wheel2()
{


   glRotatef(_angle4,0.0, 0.0, 1.0);
	glTranslatef(60.0,0.0, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(0.0,0.0,0.0);

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=10.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
}

void headlight1()
{

    glRotatef(0.0,0.0, 0.0, 1.0);
	glTranslatef(25.0,20.0, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=10.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

}
void headlight2()
{

    glRotatef(0.0,0.0, 0.0, 1.0);
	glTranslatef(-108.0,0.0, 0.0);//Rotate about the the vector (1, 2, 3)
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=10.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

}


void carN()
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
   // glRotatef(_angle1, 0.0, 0.0, 0.0);
    glTranslatef(_angle1, 0.0f, 0.0f);
    glColor3d(1,0,0);


    glBegin(GL_POLYGON);  //start car
	glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-200,-20);
	glVertex2i(-200,-60);
	glVertex2i(-140,-60);
	glVertex2i(-140,-20);
	glEnd();// car middle polygon

	 glBegin(GL_POLYGON);  //start back polygon
	glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-200,-60);
	glVertex2i(-200,-20);
	glVertex2i(-230,-25);
	glVertex2i(-230,-60);
	glEnd();//car back polygon finish

	  glBegin(GL_POLYGON);  //foword polygon start
glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-140,-20);
	glVertex2i(-140,-60);
	glVertex2i(-110,-60);
	glVertex2i(-110,-25);
	glEnd();// foword polygon finish

		 glBegin(GL_POLYGON);  //window left
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(-195,2);
	glVertex2i(-195,-20);
	glVertex2i(-170,-20);
	glVertex2i(-170,2);
	glEnd();// finish window

		 glBegin(GL_POLYGON);  //window right
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(-160,2);
	glVertex2i(-160,-20);
	glVertex2i(-140,-20);
	glVertex2i(-140,2);
	glEnd();// finish window

		  glBegin(GL_POLYGON);  //upper polygon
glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-130,-25);
	glVertex2i(-135,5);
	glVertex2i(-200,5);
	glVertex2i(-215,-25);
	glEnd();// finish upper polygon

	////headlight////
	  glBegin(GL_POLYGON);  //upper polygon
   glColor3f(1.0, 0.0, 0.0);
 	glVertex2i(-110,-30);
	glVertex2i(-110,-40);
	glVertex2i(-105,-40);
	glVertex2i(-105,-30);
	glEnd();// finish upper polygon




	wheel1();
    wheel2();

    glPopMatrix();//finish car

  //  glutSwapBuffers();
}
void carD()
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
   // glRotatef(_angle1, 0.0, 0.0, 0.0);
    glTranslatef(_angle1, 0.0f, 0.0f);
    glColor3d(1,0,0);


    glBegin(GL_POLYGON);  //start car
	glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-200,-20);
	glVertex2i(-200,-60);
	glVertex2i(-140,-60);
	glVertex2i(-140,-20);
	glEnd();// car middle polygon

	 glBegin(GL_POLYGON);  //start back polygon
	glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-200,-60);
	glVertex2i(-200,-20);
	glVertex2i(-230,-25);
	glVertex2i(-230,-60);
	glEnd();//car back polygon finish

	  glBegin(GL_POLYGON);  //foword polygon start
    glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-140,-20);
	glVertex2i(-140,-60);
	glVertex2i(-110,-60);
	glVertex2i(-110,-25);
	glEnd();// foword polygon finish

		 glBegin(GL_POLYGON);  //window left
	glColor3f(0.498, 0.498,0.498);
	glVertex2i(-195,2);
	glVertex2i(-195,-20);
	glVertex2i(-170,-20);
	glVertex2i(-170,2);
	glEnd();// finish window

		 glBegin(GL_POLYGON);  //window right
	glColor3f(0.498, 0.498,0.498);
	glVertex2i(-160,2);
	glVertex2i(-160,-20);
	glVertex2i(-140,-20);
	glVertex2i(-140,2);
	glEnd();// finish window

    glBegin(GL_POLYGON);  //upper polygon
    glColor3f(1.0, 0.940, 0.0);
	glVertex2i(-130,-25);
	glVertex2i(-135,5);
	glVertex2i(-200,5);
	glVertex2i(-215,-25);
	glEnd();// finish upper polygon

	////headlight////
	  glBegin(GL_POLYGON);  //upper polygon
   glColor3f(1.0, 0.0, 0.0);
 	glVertex2i(-110,-30);
	glVertex2i(-110,-40);
	glVertex2i(-105,-40);
	glVertex2i(-105,-30);
	glEnd();// finish upper polygon




	wheel1();
    wheel2();

    glPopMatrix();//finish car

  //  glutSwapBuffers();
}


void boat()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(_angle2, 0.0, 0.0);
    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(-180,40);
    glVertex2i(-180,30);
    glVertex2i(-160,30);
    glVertex2i(-160,40);
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2i(-185,40);
    glVertex2i(-165,40);
    glVertex2i(-165,50);
    glVertex2i(-185,50);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(-180,30);
    glVertex2i(-180,40);
    glVertex2i(-200,45);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex2i(-160,30);
    glVertex2i(-140,45);
    glVertex2i(-160,40);
    glEnd();
    glPopMatrix();

}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glColor3f(1.0, 0.0, 0.0);
    //glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();

    boat();
    carN();
    tree();
    pond();
    devider();
    road();
    HouseNight();
    background();


    glutSwapBuffers();

}
void drawSceneDay() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glColor3f(1.0, 0.0, 0.0);
    //glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();

    boat();
    carD();
    tree();
    pond();
    devider();
    road();
    House();
    backgroundDay();

    glutSwapBuffers();
}
void update(int value) {


    if(speed>1 || speed<0)
    {

        speed = 0.0f;
    }
	_angle1 += speed;

	if (_angle1 > 400) {
		_angle1 -= 400;
	}

	  if(speed2>1 || speed2<0)
    {

        speed2 = 0.0f;
    }

	_angle2 += speed2;
	if (_angle2 >90) {
		_angle2 -=200;
	}
		//Tell GLUT to call update again in 20 milliseconds
	glutTimerFunc(20, update, 0);
}
void menu(int id)
{
	switch (id)
	{
	case 1:
	    glutIdleFunc(drawSceneDay);
		break;
	case 2: glutIdleFunc(drawScene);
		break;

    case 3: exit(0);
	}
}

void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_UP:
          speed+=0.05f;
          update(0);
          break;
      case GLUT_KEY_DOWN:
          speed-=0.5f;
          update(0);
          break;
      case GLUT_KEY_RIGHT:
          speed2+=0.05f;
          update(0);
          break;
      case GLUT_KEY_LEFT:
          speed2-=0.5f;
          update(0);
          break;
    }
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB );
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(700, 600);
	glutCreateWindow("My project");
	glutDisplayFunc(drawSceneDay);
    glutSpecialFunc(specialKeys);
    initRendering();
    glutIdleFunc(idle);
	init();


    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(20, update, 0);


    glutCreateMenu(menu);
    glutAddMenuEntry("Day", 1);
	glutAddMenuEntry("Night",2);
	glutAddMenuEntry("Quit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}
