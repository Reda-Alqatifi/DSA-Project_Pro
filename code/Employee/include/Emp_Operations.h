#ifndef Emp_Operations_H
#define Emp_Operations_H
#include "code/Core/include/Sections.h"

class Emp_Operations : public SubMenus //!  Done!
{
    private:
        void add();

        void remove();
        
        void update();

        void total();

        //! for all users:
        void dispaly();

        void search();

        void sort();

    
    /////////////////////////
    

    //TODO - "Menu" :

    public:
        void Emp_menu();
        void Emp_menuChoice();
};

#endif