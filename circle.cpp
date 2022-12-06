#include "circle.h"

Circle::Circle() : Shape("Circle"), radius(0)
{}
Circle::Circle(int theRadius) : Shape("Circle"), radius(theRadius)
{}
void Circle::setRadius(int newRadius) {
	this->radius = newRadius;
}
double Circle::getRadius() {
	return radius;
}
double Circle::getArea() {
	return 3.14159 * radius * radius;
}
void Circle::printInfo() {
	std::cout << this->getName() << " has radius " <<
		this->getRadius() << " and area " <<
		this->getArea() << std::endl;
}