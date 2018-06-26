#pragma once

#include <iostream>
#include <exception>

class Student {
private:
    std::string imie;
    std::string nazwisko;
    int wiek;

public:
    Student(std::string imie, std::string nazwisko, int wiek);
};