#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include <iostream>
#include <string>
#include <algorithm>

/// @brief A Human being
class Human
{
    public:
    Human();
    Human(std::string, u_int8_t);
    Human(const Human&);
    ~Human();

    Human& SetName(std::string humanName);
    Human& SetAge(u_int8_t humanAge);
    std::string GetName();
    u_int8_t GetAge();
    void IntroduceSelf();
   
    private:
    std::string name;
    u_int8_t age;
};

#endif