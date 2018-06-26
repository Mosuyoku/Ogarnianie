#include "Shapes.h"

Shapes::Shapes(std::string name){
    this->name=name;
}

std::string Shapes::getName(){
    return this->name;
}

Rectangle::Rectangle(std::string name, double width, double height) : Shapes(name){
    this->width=width;
    this->height=height;
}

double Rectangle::area(){
    return this->width*this->height;
}

double Rectangle::perimeter(){
    return 2*this->width+2*this->height;
}

Square::Square(std::string name, double a) : Rectangle(name, a, a){}

Circle::Circle(std::string name, double r) : Shapes(name){
    this->r=r;
}
double Circle::area(){
    return this->r*this->r*3.14;
}

double Circle::perimeter(){
    return 2*3.14*this->r;
}

std::vector<Shapes*> collection(){
    std::vector<Shapes*> vec;
    vec.push_back(new Square("Kwadrat 1", 3.5));
    vec.push_back(new Square("Kwadrat 2", 6.9));
    vec.push_back(new Rectangle("Prostakat 1", 3.5, 4.23));
    vec.push_back(new Rectangle("Prostakat 2", 3.16, 5.25));
    vec.push_back(new Circle("Kolo 1", 3.14));
    vec.push_back(new Circle("Kolo 2", 5));
    return vec;
}

void iterate(std::vector<Shapes*> vec){
    for(auto i : vec){
        std::cout<<"Nazwa figury: "<<i->getName()<<", Pole figury: "<<i->area()<<", Obwod figuty: "<<i->perimeter()<<std::endl;
    }
    std::cout<<"\n"<<std::endl;
}