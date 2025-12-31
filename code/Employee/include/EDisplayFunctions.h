#ifndef EDISPLAYFUNCTIONS_H
#define EDISPLAYFUNCTIONS_H
#include "code/Core/include/Sections.h"


class Display
{
    private:
        //! Print table header for books
        void printBooksHeader();

        //! Print all books in formatted table
        void displayBooksMethod(NodeBook *temp);
        void displayBooks();

        //! Print table header for sections
        void printSectionsHeader();

        //! Display all sections
        void displaySectionsMethod(NodeSection *temp);
        void displaySections();

    
    /////////////////////////
    
    public:
        //TODO - "Menu" :

        /*caller is: "Employee or Customer"*/
        void menuDisplay(const std::string &caller);
        /*caller is: "Employee or Customer"*/
        void menuDisplayChoice(const std::string &caller);
};

#endif