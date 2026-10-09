#include <iostream>
#include "Shape.h"
using namespace std;

Circle::Circle(double r) {
	radius = r;
}
double Circle::area() {
	return 3.14 * radius * radius;
}
Rectangle::Rectangle(double l, double w) {
	width = w;
	length = l;
}
double Rectangle::area() {
	return length * width;
}
 
