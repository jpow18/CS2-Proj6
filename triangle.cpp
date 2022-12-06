#include "triangle.h"

Triangle::Triangle() : Shape("Triangle"), base(0), height(0), hypotenuse(0)
{}
Triangle::Triangle(double base, double height, double hypotenuse) : Shape("Triangle") {
	if (base < 0) {
		base = 0;
		std::cout << "base cannot be less than 0 in length." << std::endl
			<< "setting base to 0. Resize using member function setBase()." << std::endl;
	}
	else {
		this->base = base;
	}

	if (height < 0) {
		height = 0;
		std::cout << "height cannot be less than 0 in length." << std::endl
			<< "The height has been set to 0. Resize using "
			<< "member function setHeight()." << std::endl;
	}
	else {
		this->height = height;
	}
	if (hypotenuse < 0) {
		hypotenuse = 0;
		std::cout << "hypotenuse cannot be less than 0 in length." << std::endl
			<< "setting hypotenuse to 0. Resize using member function setBase()." << std::endl;
	}
	else {
		this->hypotenuse = hypotenuse;
	}
}
double Triangle::getHeight() {
	return height;
}
void Triangle::setHeight(double newHeight) {
	if (height < 0) {
		height = 0;
		std::cout << "height cannot be less than 0 in length." << std::endl
			<< "The height has been set to 0. Resize using "
			<< "member function setHeight()." << std::endl;
	}
	else {
		this->height = height;
	}
}
double Triangle::getBase() {
	return base;
}
void Triangle::setBase(double newBase) {
	if (base < 0) {
		base = 0;
		std::cout << "base cannot be less than 0 in length." << std::endl
			<< "setting base to 0. Resize using member function setBase()." << std::endl;
	}
	else {
		this->base = base;
	}
}
double Triangle::getHypotenuse() {
	return hypotenuse;
}
void Triangle::setHypotenuse(double newHypotenuse) {
	if (hypotenuse < 0) {
		hypotenuse = 0;
		std::cout << "hypotenuse cannot be less than 0 in length." << std::endl
			<< "setting hypotenuse to 0. Resize using member function setBase()." << std::endl;
	}
	else {
		this->hypotenuse = hypotenuse;
	}
}
double Triangle::getArea() {
	return 0.5 * base * height;
}
double Triangle::getPerimeter() {
	return base + height + hypotenuse;
}
void Triangle::printInfo() {
	std::cout << this->getName() << " has a base of " <<
		this->getBase() << ", a height of " <<
		this->getHeight() << ", and an area of " <<
		this->getArea() << std::endl;
}