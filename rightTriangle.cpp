#include "rightTriangle.h"

rightTriangle::rightTriangle() : Triangle(0, 0, 0), angleA(0), angleB(0), angleC(0)
{}
rightTriangle::rightTriangle(double base, double height, double hypotenuse, double angleB, double angleC) :
	Triangle(base, height, hypotenuse) {
	angleA = 90;
	while (((angleB + angleC) < 90)) {
		std::cout << "Invalid angle lengths. Please enter again." << std::endl;
		std::cout << "Please enter angle B: " << std::endl;
		double newAngle = 0;
		std::cin >> newAngle;
	}
		
	
}
double rightTriangle::getSine(double angle);
void rightTriangle::printInfo();