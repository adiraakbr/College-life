//Nama : Adira Rahmana Akbar
//NIM : 24060121140114
//Nama file: LenganBergerak.cpp
//Deskripsi: Membuat program lengan bergerak dengan menggunakan proses translasi dan rotasi objek 3D

#include <GL/glut.h>
static int thumb1 = 0, thumb2 = 0, thumb11 = 0;
static int telunjuk1 = 0, telunjuk2 = 0, telunjuk3 = 0;
static int jTengah1 = 0, jTengah2 = 0, jTengah3 = 0;
static int jManis1 = 0, jManis2 = 0, jManis3 = 0;
static int kelingking1 = 0, kelingking2 = 0, kelingking3 = 0;
static int telapak1 = 0, telapak2 = 0;
static int lenganA1 = 0, lenganA2 = 0,lenganB = 0;
void init(void){
	glClearColor(0,0,0,0);
	glShadeModel(GL_FLAT);
}
void LenganBergerak(void){
	glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
//lengan atas
 	glTranslatef(-1.8,0,0);
 	glRotatef((GLfloat) lenganA1,0,0,1);
 	glRotatef((GLfloat) lenganA2,0,1,0);
 	glTranslatef(1.8,0,0);
glPushMatrix();
 	glTranslatef(-1.4,0,0);
	glScalef(0.8,0.2,0.56);
	glutWireCube(1);
glPopMatrix();
//lengan bawah
	glTranslatef(-1,0,0);
 	glRotatef((GLfloat) lenganB,0,0,1);
 	glTranslatef(1,0,0);
glPushMatrix();
 	glTranslatef(-0.6,0,0);
 	glScalef(0.8,0.2,0.56);
 	glutWireCube(1);
glPopMatrix();
//telapak
 	glRotatef((GLfloat) telapak1, 1,0,0);
 	glRotatef((GLfloat) telapak2, 0,0,1);
glPushMatrix();
 	glScalef (0.4, 0.2, 0.56);
 	glutWireCube (1.0);
glPopMatrix();
//ibu jari
 glPushMatrix();
 	glTranslatef(0,0,0.38);
 	glRotatef((GLfloat) -thumb11,1,0,0);
 	glRotatef((GLfloat) thumb1,0,1,0);
 glPushMatrix();
 	glScalef(0.1,0.1,0.2);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0,0,0.2);
 	glRotatef((GLfloat) -thumb2,1,0,0);
 glPushMatrix();
 	glScalef(0.1,0.1,0.25);
	glutWireCube(1.0);
 glPopMatrix();
 glPopMatrix();
//jari telunjuk
 glPushMatrix();
	glTranslatef(0.3,0,0.22);
 	glRotatef((GLfloat) telunjuk1,0,0,1);
 glPushMatrix();
 	glScalef(0.2,0.1,0.13);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.2,0,0);
 	glRotatef((GLfloat) telunjuk2,0,0,1);
 glPushMatrix();
 	glScalef(0.22,0.1,0.13);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.22,0,0);
 	glRotatef((GLfloat) telunjuk3,0,0,1);
 glPushMatrix();
 	glScalef(0.21,0.1,0.13);
	glutWireCube(1.0);
 glPopMatrix();
 glPopMatrix();
//jari tengah
 glPushMatrix();
 	glTranslatef(0.3,0,0.05);
 	glRotatef((GLfloat) jTengah1,0,0,1);
 glPushMatrix();
 	glScalef(0.25,0.1,0.14);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.25,0,0);
 	glRotatef((GLfloat) jTengah2,0,0,1);
 glPushMatrix();
 	glScalef(0.27,0.1,0.14);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.27,0,0);
 	glRotatef((GLfloat) jTengah3,0,0,1);
 glPushMatrix();
 	glScalef(0.21,0.1,0.14);
	glutWireCube(1.0);
 glPopMatrix();
 glPopMatrix();
//jari manis
 glPushMatrix();
 	glTranslatef(0.3,0,-0.1);
 	glRotatef((GLfloat) jManis1,0,0,1);
 glPushMatrix();
 	glScalef(0.2,0.1,0.11);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.2,0,0);
 	glRotatef((GLfloat) jManis2,0,0,1);
 glPushMatrix();
 	glScalef(0.21,0.1,0.11);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.21,0,0);
 	glRotatef((GLfloat) jManis3,0,0,1);
glPushMatrix();
 glScalef(0.2,0.1,0.11);
glutWireCube(1.0);
 glPopMatrix();
 glPopMatrix();
//jari kelingking
 glPushMatrix();
 	glTranslatef(0.3,0,-0.21);
 	glRotatef((GLfloat) kelingking1,0,0,1);
 glPushMatrix();
 	glScalef(0.18,0.1,0.1);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.18,0,0);
 	glRotatef((GLfloat) kelingking2,0,0,1);
 glPushMatrix();
 	glScalef(0.17,0.1,0.1);
	glutWireCube(1.0);
 glPopMatrix();
 	glTranslatef(0.17,0,0);
 	glRotatef((GLfloat) kelingking3,0,0,1);
 glPushMatrix();
 	glScalef(0.19,0.1,0.1);
	glutWireCube(1.0);
 glPopMatrix();
 glPopMatrix();

glPopMatrix();
glutSwapBuffers();
} 
void reshape(int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef (0.0, 0.0, -5.0);
}
void keyboard(unsigned char key, int x, int y) {
switch (key){
//lengan atas
case 'a': lenganA1 = (lenganA1 + 5) % 360;
 	 if(lenganA1 > 110) lenganA1 = 110;
   	 glutPostRedisplay();
break;
case 'A': lenganA1 = (lenganA1 - 5) % 360;
	 if(lenganA1 < -110) lenganA1 = -110;
	 glutPostRedisplay();
break;
case 'd': lenganA2 = (lenganA2 + 5) % 360;
	 if (lenganA2 > 90) lenganA2 = 90;
	 glutPostRedisplay();
break;
 case 'D': lenganA2 = (lenganA2 - 5) % 360;
 	 if (lenganA2 < -90) lenganA2 = -90;
  	 glutPostRedisplay();
break;
//lengan bawah
case 's': lenganB = (lenganB + 5) % 360;
 	if(lenganB > 120) lenganB = 120;
	glutPostRedisplay();
break;
 	case 'S': lenganB = (lenganB - 5) % 360;
 	if(lenganB < 0) lenganB = 0;
	glutPostRedisplay();
break;
 //telapak tangan
case 'q': telapak1 = (telapak1 + 5) % 360;
 	if(telapak1 > 90) telapak1 =90;
	glutPostRedisplay();
break;
case 'Q': telapak1 = (telapak1 - 5) % 360;
	 if(telapak1 < -90) telapak1 =-90;
	glutPostRedisplay();
break;
case 'w': telapak2 = (telapak2 + 5) % 360;
 	if (telapak2 > 90) telapak2 = 90;
	glutPostRedisplay();
break;
case 'W': telapak2 = (telapak2 - 5) % 360;
 	if (telapak2 < 0) telapak2 = 0;
	glutPostRedisplay();
break;
//ibu jari
case 'z': thumb11 = (thumb11 - 5) % 360;
 	if (thumb11 < 0) thumb11 = 0;
	glutPostRedisplay();
break;
case 'Z': thumb11 = (thumb11 + 5) % 360;
 	if (thumb11 > 90) thumb11 = 90;
	glutPostRedisplay();
break;
case 'x': thumb1 = (thumb1 - 5) % 360;
 	if (thumb1 < 0) thumb1 = 0;
	glutPostRedisplay();
break;
case 'X': thumb1 = (thumb1 + 5) % 360;
 	if (thumb1 > 90) thumb1 = 90;
	glutPostRedisplay();
break;
case 'c': thumb2 = (thumb2 - 5) % 360;
 	if (thumb2 < 0) thumb2 = 0;
	glutPostRedisplay();
break;
case 'C': thumb2 = (thumb2 + 5) % 360;
 	if (thumb2 > 90) thumb2 = 90;
	glutPostRedisplay();
break;
//telunjuk
case 'r': telunjuk1 = (telunjuk1 - 5) % 360;
 	if (telunjuk1 < 0) telunjuk1 = 0;
	glutPostRedisplay();
break;
case 'R': telunjuk1 = (telunjuk1 + 5) % 360;
 	if (telunjuk1 > 90) telunjuk1 = 90;
 	glutPostRedisplay();
break;
case 'f': telunjuk2 = (telunjuk2 - 5) % 360;
 if (telunjuk2 < 0) telunjuk2 = 0;
glutPostRedisplay();
break;
 case 'F': telunjuk2 = (telunjuk2 + 5) % 360;
 if (telunjuk2 > 90) telunjuk2 = 90;
 glutPostRedisplay();
break;
 case 'v': telunjuk3 = (telunjuk3 - 5) % 360;
 if (telunjuk3 < 0) telunjuk3 = 0;
glutPostRedisplay();
break;
 case 'V': telunjuk3 = (telunjuk3 + 5) % 360;
 if (telunjuk3 > 90) telunjuk3 = 90;
 glutPostRedisplay();
break;
 //jari tengah
 case 't': jTengah1 = (jTengah1 - 5) % 360;
 if (jTengah1 < 0) jTengah1 = 0;
glutPostRedisplay();
break;
 case 'T': jTengah1 = (jTengah1 + 5) % 360;
 if (jTengah1 > 90) jTengah1 = 90;
glutPostRedisplay();
break;
 case 'g': jTengah2 = (jTengah2 - 5) % 360;
 if (jTengah2 < 0) jTengah2 = 0;
glutPostRedisplay();
break;
 case 'G': jTengah2 = (jTengah2 + 5) % 360;
 if (jTengah2 > 90) jTengah2 = 90;
glutPostRedisplay();
break;
 case 'b': jTengah3 = (jTengah3 - 5) % 360;
 if (jTengah3 < 0) jTengah3 = 0;
glutPostRedisplay();
break;
 case 'B': jTengah3 = (jTengah3 + 5) % 360;
 if (jTengah3 > 90) jTengah3 = 90;
glutPostRedisplay();
break;
 //jari manis
 case 'y': jManis1 = (jManis1 - 5) % 360;
 if (jManis1 < 0) jManis1 = 0;
glutPostRedisplay();
break;
 case 'Y': jManis1 = (jManis1 + 5) % 360;
 if (jManis1 > 90) jManis1 = 90;
glutPostRedisplay();
break;
 case 'h': jManis2 = (jManis2 - 5) % 360;
 if (jManis2 < 0) jManis2 = 0;
glutPostRedisplay();
break;
 case 'H': jManis2 = (jManis2 + 5) % 360;
 if (jManis2 > 90) jManis2 = 90;
glutPostRedisplay();
break;
case 'n': jManis3 = (jManis3 - 5) % 360;
 if (jManis3 < 0) jManis3 = 0;
glutPostRedisplay();
break;
 case 'N': jManis3 = (jManis3 + 5) % 360;
 if (jManis3 > 90) jManis3 = 90;
glutPostRedisplay();
break;
//kelingking
 case 'u': kelingking1 = (kelingking1 - 5) % 360;
 if (kelingking1 < 0) kelingking1 = 0;
 glutPostRedisplay();
break;
 case 'U': kelingking1 = (kelingking1 + 5) % 360;
 if (kelingking1 > 90) kelingking1 = 90;
glutPostRedisplay();
break;
 case 'i': kelingking2 = (kelingking2 - 5) % 360;
 if (kelingking2 < 0) kelingking2 = 0;
 glutPostRedisplay();
break;
 case 'I': kelingking2 = (kelingking2 + 5) % 360;
 if (kelingking2 > 90) kelingking2 = 90;
glutPostRedisplay();
break;
 case 'o': kelingking3 = (kelingking3 - 5) % 360;
 if (kelingking3 < 0) kelingking3 = 0;
 glutPostRedisplay();
break;
 case 'O': kelingking3 = (kelingking3 + 5) % 360;
 if (kelingking3 > 90) kelingking3 = 90;
glutPostRedisplay();
break;
 case 27: exit(10);
//tab untuk reset
 case 9 : kelingking1 = kelingking2 = kelingking3 =
lenganA1 = lenganA2 = lenganB = jManis1 = jManis2 = jManis3 = jTengah1
= jTengah2 = jTengah3 = telunjuk1 = telunjuk2 = telunjuk3 = thumb1 =
thumb11 = thumb2 = telapak1 = telapak2 = 0;
 glutPostRedisplay();
break;
 default:break;
 }
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow (argv[0]);
init();
glutDisplayFunc(LenganBergerak);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
} 
