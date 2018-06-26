#pragma once

#include <iostream>
#include <map>

class Kontakty {
private:
    std::string name;
    std::string surname;
    int age;

public:
    Kontakty(std::string name, std::string surname, int age);

    const std::string &getName() const;

    const std::string &getSurname() const;

    int getAge() const;
};

std::map<std::string, Kontakty*>mapCollection();
bool searchMap(std::map<std::string, Kontakty*> m, std::string username);
void print(std::map<std::string, Kontakty*>m);