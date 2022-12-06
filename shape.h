#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape {
public:
	Shape();
	Shape(string name);
	string getName();
	void setName(string newName);
	virtual double getArea() = 0;
	virtual void printInfo();
private:
	string name;
};
#endif // !SHAPE_H
