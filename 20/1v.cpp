#include <iostream>
#include <string>

using namespace std;

class Person 
{
public:
    string name;
    int age;

    void introduce() 
    {
        cout << "Привіт, мене звати " << name << ", мені " << age << " років." << endl;
    }
};

void print(Person* person) 
{
    cout << person->name << " is " << person->age << " years old" << endl;
}

int main() 
{
    Person person;
    person.name = "Harry";
    person.age = 23;

    cout << "Meet " << person.name << "; ";
    print(&person);

    Person person2;
    person2.name = "Anna";
    person2.age = 20;
    person2.introduce();

    Person person3;
    person3.name = "Oleg";
    person3.age = 25;
    person3.introduce();

    return 0;
}
