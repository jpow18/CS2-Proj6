#include "rectangle.h"

Rectangle::Rectangle() : Shape("Rectangle"), height(0), width(0)
{}
Rectangle::Rectangle(double height, double width) : Shape("Rectangle") {
	if (height < 0) {
		this->height = 0;
	}
	else {
		this->height = height;
	}
	if (width < 0) {
		this->width = 0;
	}
	else {
		this->width = width;
	}
}
void Rectangle::setHeight(double newHeight) {
	if (newHeight < 0) {
		this->height = 0;
	}
	else {
		this->height = newHeight;
	}
}
double Rectangle::getHeight() {
	return height;
}
void Rectangle::setWidth(double newWidth) {
	if (newWidth < 0) {
		this->width = 0;
	}
	else {
		this->width = newWidth;
	}
}
double Rectangle::getWidth() {
	return width;
}
double Rectangle::getArea() {
	return height * width;
}
void Rectangle::printInfo() {
	std::cout << this->getName() << " has width " <<
		this->getWidth() << " has height " <<
		this->getHeight() << " and area " <<
		this->getArea() << std::endl;
}