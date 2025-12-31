#ifndef UPDATEFUNCTIONS_H
#define UPDATEFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Update
{
    private:
        
        //TODO - Update "Section" :
        
        void updateSectionName();

        //TODO - Update "Book" :

        void updateBookMenu(NodeBook *targetBook);

        void updateBookDetails();
        
    /////////////////////////
    
    public:
        //TODO - "Menu" :

        void menuUpdate();
        void menuUpdateChoice();
};

#endif