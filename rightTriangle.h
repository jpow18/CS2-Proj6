#pragma once
#include "triangle.h"

class rightTriangle : public Triangle {
public:
	rightTriangle();
	rightTriangle(double base, double height, double hypotenuse, double angleB, double angleC);
	double getSine(double angle);
	virtual void printInfo();
private:
	double angleA;
	double angleB;
	double angleC;
};