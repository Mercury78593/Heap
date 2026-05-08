// page 229 of Sams C++ inOne Hour a Day
//

#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

int main()
{

    Human firstWoman("Eve", 28);
    // firstWoman.SetName("Eve").SetAge(28);
    firstWoman.IntroduceSelf();

    Human firstMan("Adam", 43);
    // firstMan.SetName("Adam").SetAge(43);
    firstMan.IntroduceSelf();

    cin.ignore();
    cin.get();

    return 0;
}

/*

Constructor an instance of class Human
I am Eve and am 28 years old.
Constructor an instance of class Human
I am Adam and am 43 years old.


Done with Human. Bye.
Done with Human. Bye.

*/