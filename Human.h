#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include <iostream>
#include <string>
#include <cstdint>

/// @brief A Human being
class Human
{
    public:
    Human();
    Human(std::string, uint8_t);
    Human(const Human&);
    ~Human();

    Human& SetName(std::string humanName);
    Human& SetAge(uint8_t humanAge);
    std::string GetName();
    uint8_t GetAge();
    void IntroduceSelf();
   
    private:
    std::string name;
    uint8_t age;
};

#endif