#include "person.h"
#include <iostream>

Person::Person(std::string nm)
{
    name = nm;
}

Person::~Person()
{

}

void Person::PrintPerson()
{
    std::cout << "Name:" << name << std::endl;
}