#ifndef RECTANGLE_H 
#define RECTANGLE_H

#include <iostream>
#include "shape.h"

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(double height, double width);
	void setHeight(double newHeight);
	double getHeight();
	void setWidth(double newWidth);
	double getWidth();
	double getArea();
	virtual void printInfo();
private:
	double height;
	double width;
};

#endif