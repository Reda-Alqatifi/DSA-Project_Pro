#ifndef BUYFUNCTIONS_H
#define BUYFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Buy 
{
    private:
        
        //TODO >>>>>>>>>>>>> "Buy Book" :

        void buyBook(BLinkedList *book);
        void ChoeseBook();


    public:
        //TODO >>>>>>>>>>>>> "Buy Menu" :

        void menuBuy(); //! Buy functions menu
        void menuBuyChoice(); //! Loop to choese which you want to Buy
};

#endif