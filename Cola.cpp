#include "Cola.h"

Cola::Cola(){}

void Cola::DibujarCola(int x, int y, int z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		// Inicio de la cola
		glTranslatef(-0.5, 0.0, 0.0);
		glRotatef(30, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
			glScalef(1.0, 0.9, 0.8);
			glutSolidCube(1.0);
		glPopMatrix();

		// Segmentos de la cola
		for (float i = (float)NumSegments; i > 0; i--) {
			glTranslatef(0.5, 0.0, 0.0);
			glRotatef(42, 0.0, 0.0, 1.0);
			glTranslatef(0.5, 0.0, 0.0);
			glPushMatrix();
				// glScalef(1.0, 0.4, 0.5);
				glScalef(1.0, i/6.0f, i/6.0f);
				glutSolidCube(1.0);
			glPopMatrix();
		}

		// Final de cola puntiaguda (cono)
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef(42, 0.0, 0.0, 1.0);
		glPushMatrix();
			glScalef(0.8, 0.8, 0.8);
			glRotatef(90, 0.0, 1.0, 0.0);
			glutSolidCone(1.0, 1.0, 8, 20);
		glPopMatrix();
	glPopMatrix();
}

Cola::~Cola(){}
