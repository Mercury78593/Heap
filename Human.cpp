#include <iostream>
#include <string>

#include "Human.h"
using namespace std;

string name;
int age;


Human::Human()  // constructor
{
    age =1;
    cout << "Constructor an instance of class Human" << endl;
}

Human::~Human()
{
   cout << "Done with Human. Bye." << endl;
}

void Human::SetName(std::string humanName)
{
    name = humanName;
}

void Human::SetAge(int humanAge)
{
    age = humanAge;
}

void Human::IntroduceSelf()
{
    cout << "I am " << name << " and am " ;
    cout << age << " years old." << endl;
}
