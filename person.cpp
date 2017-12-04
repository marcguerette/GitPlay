#include "person.h"
#include <iostream>

Person::Person(std::string fn, std::string ln, int ag)
{
    firstName = fn;
    lastName = ln;
    age = ag;
}

Person::~Person()
{

}

void Person::PrintPerson()
{
    std::cout << "Last name:" << lastName << std::endl << "First name:" << firstName << std::endl << "Age:" << age << "\n\n";
}