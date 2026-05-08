#include <iostream>
#include <string>

#include "Human.h"
using namespace std;

Human::Human()  // constructor
{
    this->age = 1;
    cout << "Constructor an instance of class Human" << endl;
}

Human::~Human()
{
   cout << "Done with Human. Bye." << endl;
}

void Human::SetName(std::string humanName)
{
    this->name = humanName;
}

void Human::SetAge(u_int8_t humanAge)
{
    this->age = humanAge;
}

void Human::IntroduceSelf()
{
    cout << "I am " << this->name << " and am " ;
    cout << this->age << " years old." << endl;
}
