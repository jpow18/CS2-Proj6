#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
	Circle();
	Circle(int theRadius);
	void setRadius(int newRadius);
	double getRadius();
	virtual double getArea();
	void printInfo() const;
	virtual void printInfo();
private:
	int radius;
};
#endif // !CIRCLE_H
