#ifndef LAB11_CALCULATIONS_H_INCLUDED
#define LAB11_CALCULATIONS_H_INCLUDED

#include "circle.h"//используем файл circle.h
struct Circle makeCircle(int Ox, int Oy, int Mx, int My);
float radius(int Ox, int Oy, int Mx, int My);
float areaOfCircle(float radius);
float circumference(float radius);
//задали функции, которые будут использоваться в calculations.c
#endif
