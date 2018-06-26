#include "Student.h"

Student::Student(std::string imie, std::string nazwisko, int wiek){
this->imie=imie;
this->nazwisko=nazwisko;
this->wiek=wiek;

    if(imie==""){
        throw std::length_error("Brak imienia!");
    }

    if(nazwisko==""){
        throw std::length_error("Brak nazwiska!");
    }

    if(wiek<18 || wiek>100){
        throw std::runtime_error("Zly wiek!");
    }
}

