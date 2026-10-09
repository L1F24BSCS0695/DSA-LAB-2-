#include "Employee.h"
using namespace std;

FullTimeEmployee::FullTimeEmployee(double s)
{
    salary = s;
}

double FullTimeEmployee::calculateSalary()
{
    return salary;
}

PartTimeEmployee::PartTimeEmployee(int h, double r)
{
    hours = h;
    rate = r;
}

double PartTimeEmployee::calculateSalary()
{
    return hours * rate;
}