#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

int main() {
	Circle c(2);
	c.printInfo();

	Rectangle r(3, 4);
	r.printInfo();

	Rectangle r2(-1, 10);
	r2.printInfo();

	Rectangle r3(3.14, 3.14);
	r3.printInfo();
	std::cout << r3.getHeight() << std::endl;
	std::cout << r3.getWidth() << std::endl;
	std::cout << r3.getName() << std::endl;
	r3.setHeight(202.12);
	r3.setWidth(1231.1234);
	std::cout << r3.getArea() << std::endl;

	Triangle t(10, 10);
	t.printInfo();

	Triangle t1(12.34, 10.97);
	t1.printInfo();

	system("pause");
	return 0;
}