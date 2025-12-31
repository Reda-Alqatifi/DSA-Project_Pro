#ifndef RETURNFUNCTIONS_H
#define RETURNFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Return 
{
    private:
        
        //TODO >>>>>>>>>>>>> "Return Book" :

        void returnBook(BLinkedList *book);
        void ChoeseBook();


    public:
        //TODO >>>>>>>>>>>>> "Return Menu" :

        void menuReturn(); //! Return functions menu
        void menuReturnChoice(); //! Loop to choese which you want to Return
};

#endif