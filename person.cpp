#include "person.h"
#include <iostream>

Person::Person(std::string nm, int ag)
{
    name = nm;
    age = ag;
}

Person::~Person()
{

}

void Person::PrintPerson()
{
    std::cout << "Name:" << name << std::endl << "Age:" << age << std::endl;
}