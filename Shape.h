#pragma once
class Shape
{
public:
	virtual double arae() = 0;
	virtual ~Shape() {}
};
class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r);
	double area();
};
class Rectangle : public Shape {
private:
	double length; 
	double width;
public:
	Rectangle(double l, double w);
	double area();
};

