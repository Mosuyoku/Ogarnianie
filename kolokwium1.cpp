#include <iostream>
#include <vector>
#include <exception>
#include <map>
#include "Shapes.h"
#include "Student.h"
#include "Kontakty.h"

int main(){
//------Zadanie 1---------
   std::vector<Shapes*> vec = collection();
   iterate(vec);

//------Zadanie 2---------
   try{
       Student s("Jan", "Kowalski", 5);
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
    try{
        Student s1("", "Kowalski", 25);

    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
    try{
        Student s2("Jan", "", 25);

    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
       Student s3("Anna", "Maria", 20);
   }
   catch(std::exception &e){
       std::cout<<e.what()<<std::endl;
   }

//------Zadanie 3---------
    std::cout<<std::endl;
    std::map<std::string, Kontakty*>m = mapCollection();
    std::string x;
    std::cout<<"Sprawdz czy jest tu Twoj znajomy!"<<std::endl;
    std::cin>>x;
        if(searchMap(m, x)){
            std::cout<<"["<<x<<"] : "<<m[x]->getSurname()<<" "<<m[x]->getName()<<" "<<m[x]->getAge()<<std::endl;
        }
        else{
            std::cout<<"Brak takiego kontaktu!"<<std::endl;
        }
    std::cout<<std::endl;
    std::cout<<std::endl;
    print(m);
    return 0;
}