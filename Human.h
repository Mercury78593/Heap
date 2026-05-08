#ifndef HUMAN_H
#define HUMAN_H

#pragma once

#include <iostream>
#include <string>

class Human
{
    public:
    Human();
    ~Human();

    void SetName(std::string humanName);
    void SetAge(u_int8_t humanAge);
    void IntroduceSelf();
   
    private:
    std::string name;
    u_int8_t age;
};

#endif