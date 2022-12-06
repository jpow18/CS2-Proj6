#pragma once

#include <iostream>
#include "shape.h"

class Triangle : public Shape {
public:
	Triangle();
	Triangle(double base, double height, double hypotenuse);
	double getHeight();
	void setHeight(double newHeight);
	double getBase();
	void setBase(double newBase);
	double getHypotenuse();
	void setHypotenuse(double newHypotenuse);
	double getArea();
	double getPerimeter();
	virtual void printInfo();
private:
	double base;
	double height;
	double hypotenuse;
};