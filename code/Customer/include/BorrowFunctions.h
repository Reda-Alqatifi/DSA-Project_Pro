#ifndef BORROWFUNCTIONS_H
#define BORROWFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Borrow 
{
    private:
        
        //TODO >>>>>>>>>>>>> "Borrow Book" :

        void borrowBook(BLinkedList *book);
        void ChoeseBook();


    public:
        //TODO >>>>>>>>>>>>> "Borrow Menu" :

        void menuBorrow(); //! Borrow functions menu
        void menuBorrowChoice(); //! Loop to choese which you want to Borrow
};

#endif