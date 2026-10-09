#pragma once
class Employee
{
public:
    virtual double calculateSalary() = 0;
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee
{
private:
    double salary;

public:
    FullTimeEmployee(double s);
    double calculateSalary();
};

class PartTimeEmployee : public Employee
{
private:
    int hours;
    double rate;

public:
    PartTimeEmployee(int h, double r);
    double calculateSalary();
};