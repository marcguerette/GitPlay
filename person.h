#include <string>

class Person
{
public:
    Person(std::string fn, std::string ln, int ag);
    ~Person();
    void PrintPerson();
private:
    std::string firstName;
    std::string lastName;
    int age;
};