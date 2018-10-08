// CG_assignment 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h> //Needed for "exit" function
//Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;
//prototypes
void pentagon();
void hexgon();
void nanogon();
void heptgnon();
void decegon();
void octgnon();
void handleKeypress(unsigned char key, //The key that was pressed
	int x, int y);
void handleResize(int w, int h);
void drawScene();
void initRendering();
/*********************************************************************************/

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(300, 300); //Set the window size

								  //Create the window
	glutCreateWindow("Draw Shapes");
	initRendering(); //Initialize rendering

					 //Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);

	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached
}

//Called when a key is pressed
void handleKeypress(unsigned char key, //The key that was pressed
	int x, int y) {    //The current mouse coordinates
	switch (key) {
	case 27: //Escape key
		exit(0); //Exit the program
	}
}

//Initializes 3D rendering
void initRendering() {
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	//Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION); //Switch to setting the camera perspective

								 //Set the camera perspective
	glLoadIdentity(); //Reset the camera
	gluPerspective(45.0,                  //The camera angle
		(double)w / (double)h, //The width-to-height ratio
		1.0,                   //The near z clipping coordinate
		200.0);                //The far z clipping coordinate
}

//Draws the 3D scene
void drawScene() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective

	glPushMatrix();
	glTranslatef(-3., 3., -5.);
	glColor3f(1., 0., 0.);
	pentagon();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0., 3., -5.);
	glColor3f(0., 1., 0.);
	hexgon();
	glPopMatrix();




	glPushMatrix();
	glTranslatef(-3., 1., -5.);
	glColor3f(0., 0., 1.);
	heptgnon();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0., 1., -5.);
	glColor3f(1., 1., 0.);
	octgnon();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3., -1.5, -5.);
	glColor3f(0., 1., 1.);
	nanogon();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0., -1., -5.);
	glColor3f(1., 0., 1.);
	decegon();
	glPopMatrix();


	glutSwapBuffers(); //Send the 3D scene to the screen
}


void pentagon() {
	//pentagon from trapezoid and triangle
	glBegin(GL_QUADS);

	//Trapezoid
	glVertex3f(-0.8f, 0.2f, -5.0f);
	glVertex3f(0.8f, 0.2f, -5.0f);
	glVertex3f(0.5f, -0.7f, -5.0f);
	glVertex3f(-0.5f, -0.7f, -5.0f);

	glEnd();

	//triangle
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.8f, 0.2f, -5.0f);
	glVertex3f(0.8f, 0.2f, -5.0f);
	glVertex3f(0.0f, 0.8f, -5.0f);
	glEnd();
}
void hexgon() {
	glBegin(GL_QUADS);

	//HEXAGON using two Trapazoid
	glVertex3f(-0.8f, .0f, -5.0f);
	glVertex3f(0.8f, 0.0f, -5.0f);
	glVertex3f(0.5f, -0.5f, -5.0f);
	glVertex3f(-0.5f, -0.5f, -5.0f);

	glVertex3f(-0.8f, .0f, -5.0f);
	glVertex3f(0.8f, 0.0f, -5.0f);
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(-0.5f, 0.5f, -5.0f);

	glEnd();
}
void heptgnon() {
	//hepta
	glBegin(GL_QUADS);

	//HEXAGON using two Trapazoid
	glVertex3f(-0.7f, .0f, -5.0f);
	glVertex3f(0.7f, 0.0f, -5.0f);
	glVertex3f(0.3f, -0.5f, -5.0f);
	glVertex3f(-0.3f, -0.5f, -5.0f);

	glVertex3f(-0.7f, .0f, -5.0f);
	glVertex3f(0.7f, 0.0f, -5.0f);
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(-0.5f, 0.5f, -5.0f);
	glEnd();
	glBegin(GL_TRIANGLES);

	glVertex3f(-0.5f, 0.5f, -5.0f);
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(0.0f, .9f, -5.0f);
	glEnd();
}
void octgnon() {
	// octagon
	glBegin(GL_QUADS);

	////Trapezoid
	glVertex3f(-0.7f, 0.2f, -5.0f);
	glVertex3f(0.7f, 0.2f, -5.0f);
	glVertex3f(0.7f, -0.3f, -5.0f);
	glVertex3f(-0.7f, -0.3f, -5.0f);


	glVertex3f(-0.7f, -0.3f, -5.0f);
	glVertex3f(0.7f, -0.3f, -5.0f);
	glVertex3f(0.3f, -0.7f, -5.0f);
	glVertex3f(-0.3f, -0.7f, -5.0f);


	glVertex3f(-0.7f, 0.2f, -5.0f);
	glVertex3f(0.7f, 0.2f, -5.0f);
	glVertex3f(0.3f, 0.6f, -5.0f);
	glVertex3f(-0.3f, 0.6f, -5.0f);
	glEnd();
	/*glBegin(GL_TRIANGLES);

	glVertex3f(0., 0., -5.);
	glVertex3f(-.5, -0.7, -5.);
	glVertex3f(0.5, -0.7, -5.);
	glEnd();
	*/
}
void nanogon() {

	glBegin(GL_QUADS);

	glVertex3f(-0.8f, 0.2f, -5.0f);
	glVertex3f(0.8f, 0.2f, -5.0f);
	glVertex3f(0.5f, -0.1f, -5.0f);
	glVertex3f(-0.5f, -0.1f, -5.0f);



	glVertex3f(-0.8f, 0.2f, -5.0f);
	glVertex3f(0.8f, 0.2f, -5.0f);
	glVertex3f(1.f, 0.6f, -5.0f);
	glVertex3f(-1.f, 0.6f, -5.0f);

	glVertex3f(-0.8f, 1.f, -5.0f);
	glVertex3f(0.8f, 1.f, -5.0f);
	glVertex3f(1.f, 0.6f, -5.0f);
	glVertex3f(-1.0f, 0.6f, -5.0f);

	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.8f, 1.f, -5.0f);
	glVertex3f(0.8f, 1.f, -5.0f);
	glVertex3f(.0f, 1.3f, -5.0f);
	glEnd();
}
void decegon() {

	glBegin(GL_QUADS);
	glVertex3f(-0.7f, 0.2f, -5.0f);
	glVertex3f(0.7f, 0.2f, -5.0f);
	glVertex3f(0.7f, -0.3f, -5.0f);
	glVertex3f(-0.7f, -0.3f, -5.0f);

	glVertex3f(-0.7f, 0.2f, -5.0f);
	glVertex3f(0.7f, 0.2f, -5.0f);
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(-0.5f, 0.5f, -5.0f);


	glVertex3f(-0.5f, -0.6f, -5.0f);
	glVertex3f(0.5f, -0.6f, -5.0f);
	glVertex3f(0.7f, -0.3f, -5.0f);
	glVertex3f(-0.7f, -0.3f, -5.0f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3f(0.5f, 0.5f, -5.0f);
	glVertex3f(-0.5f, 0.5f, -5.0f);
	glVertex3f(0.f, 0.7f, -5.0f);

	glVertex3f(-0.5f, -0.6f, -5.0f);
	glVertex3f(0.5f, -0.6f, -5.0f);
	glVertex3f(0.f, -0.8f, -5.0f);

	glEnd();
}
