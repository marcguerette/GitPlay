#include <string>

class Person
{
public:
    Person(std::string);
    ~Person();
    void PrintPerson();
private:
    std::string name;
};