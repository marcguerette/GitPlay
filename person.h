#include <string>

class Person
{
public:
    Person(std::string, int);
    ~Person();
    void PrintPerson();
private:
    std::string name;
    std::string lastName;
    int age;
};