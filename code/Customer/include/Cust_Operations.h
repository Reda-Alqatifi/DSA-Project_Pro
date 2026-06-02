#ifndef Cust_Operations_H
#define Cust_Operations_H
#include "code/Core/include/Sections.h"

class Cust_Operations : public SubMenus //!  Done!
{
    private:
        void Borrow();

        void Buy();
        
        void returnBook();

        //! for all users:
        void dispaly();

        void search();

        void sort();

    
    /////////////////////////
    

    //TODO - "Menu" :

    public:
        void Cust_menu();
        void Cust_menuChoice();
};

#endif