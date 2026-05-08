#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include <iostream>
#include <string>

/// @brief A Human being
class Human
{
    public:
    Human();
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