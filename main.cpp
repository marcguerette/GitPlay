#include <iostream>
#include "person.h"

int main(int argc, char const *argv[])
{
    std::cout << "Hello, world" << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << "\n";
    }

    Person p1("Person 1", 25);
    p1.PrintPerson();

    Person p2("Person 2", 30);
    p2.PrintPerson();

    return 0;
}