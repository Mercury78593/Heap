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
void SetAge(int humanAge);
void IntroduceSelf();
   
    private:
    
    
};

#endif