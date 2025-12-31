#include "Core/include/Global.h"
#include "Core/include/MainMenu.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "\nHellow world!" << endl;

    
    //! there is an Error said: 
    /*//? undefined reference to `General::pause(std::__cxx11::basic_string<char, 
    //? std::char_traits<char>, std::allocator<char> > const&)'*/
    // General G;
    // G.pause("");


    //! there is an Error said: 
    //? undefined reference to `Menu::mainMenuChoice()'
    //? collect2.exe: error: ld returned 1 exit status
    // Menu m;
    // m.mainMenuChoice();



    return 0;
}