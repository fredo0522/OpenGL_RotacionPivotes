#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

#define NumSegments 4

class Cola
{
public:
	Cola();
	void DibujarCola(int x, int y, int z);
	~Cola();
};

