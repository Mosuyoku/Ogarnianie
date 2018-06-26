#pragma once

#include <iostream>
#include <vector>
#include <string>


class Shapes{
private:
    std::string name;

public:
    Shapes(std::string name);
    virtual double area()=0;
    virtual double perimeter()=0;
    std::string getName();
};

class Rectangle : public Shapes{
private:
    double width;
    double height;

public:
    Rectangle(std::string name, double width, double height);
    double area() override ;
    double perimeter() override;
};

class Square : public Rectangle{
private:
    double a;

public:
    Square(std::string name, double a);
};

class Circle : public Shapes{
private:
    double r;

public:
    Circle(std::string name, double r);
    double area() override;
    double perimeter() override;
};

std::vector<Shapes*> collection();

void iterate(std::vector<Shapes*> vec);