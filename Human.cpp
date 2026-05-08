#include "Human.h"

/// @brief Create a new human (with a default age of 1)
Human::Human()
{
    age = 1;
    std::cout << "Constructor an instance of class Human" << std::endl;
}

/// @brief Create a new human (given name and age)
/// @param humanName 
/// @param humanAge 
Human::Human(std::string humanName, u_int_8_t humanAge) {
    name = humanName;
    age = humanAge;
}

/// @brief Create a new human from another human
/// @param other 
Human::Human(const Human& other) {
    name = other.name;
    age = other.age;
}

/// @brief Destructs a human
Human::~Human()
{
   std::cout << "Done with Human. Bye." << std::endl;
}

/// @brief Sets the Human's name
/// @param humanName 
/// @return Human (for chaining calls)
Human& Human::SetName(std::string humanName)
{
    name = humanName;
    return *this;
}

/// @brief Sets the Human's age
/// @param humanAge (limited to 0-255, size of unsigned 8-bit integer)
/// @return Human (for chaining calls)
Human& Human::SetAge(u_int8_t humanAge)
{
    age = humanAge;
    return *this;
}

/// @brief Gets the Human's name
/// @return name
std::string Human::GetName() {
    return name;
}

/// @brief Gets the Human's age
/// @return age
u_int8_t Human::GetAge() {
    return age;
}

/// @brief Prints to stdout the Human's name and age
void Human::IntroduceSelf()
{
    std::cout << "I am " << name << " and am " ;
    std::cout << age << " years old." << std::endl;
}
