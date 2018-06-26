#include "Kontakty.h"

Kontakty::Kontakty(std::string name, std::string surname, int age){
    this->name=name;
    this->surname=surname;
    this->age=age;
}

const std::string &Kontakty::getName() const {
    return name;
}

const std::string &Kontakty::getSurname() const {
    return surname;
}

int Kontakty::getAge() const {
    return age;
}

std::map<std::string, Kontakty*>mapCollection(){
    std::map<std::string, Kontakty*> m;
    m.insert({"janusz123", new Kontakty("Jan", "Kowalski", 23)});
    m.insert({"xxx321", new Kontakty("Jerzy", "Jerz", 20)});
    m.insert({"anula1337", new Kontakty("Anna", "Nowak", 69)});
    return m;
}

bool searchMap(std::map<std::string, Kontakty*> m, std::string username){
    for(auto &i : m){
        if(i.first == username){
            return true;
        }
    }
    return false;
}

void print(std::map<std::string, Kontakty*>m){
    for(auto &i : m){
        std::cout<<"["<<i.first<<"] : "<<i.second->getSurname()<<" "<<i.second->getName()<<" "<<i.second->getAge()<<std::endl;
    }
}