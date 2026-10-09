#include <iostream>
#include "Shape.h"
using namespace std;

int main()
{
    Circle c(4);
    Rectangle r(5, 7);

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}