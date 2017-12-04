#include <iostream>
#include "person.h"

int main(int argc, char const *argv[])
{
    std::cout << "Hello there, world" << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << "\n";
    }

    Person p1("Joe", "Bloggs", 25);
    p1.PrintPerson();

    Person p2("Andy", "Barrow", 35);
    p2.PrintPerson();

	Person p3("Marc", "Barrow", 35);
    p3.PrintPerson();
    return 0;
}
