#ifndef ESEARCHFUNCTIONS_H
#define ESEARCHFUNCTIONS_H
#include "code/Core/include/Sections.h"

//TODO - I will do it using  'BST'

class Search
{
    private:
        //! Generic function to search inside books (by Title, Author, or Code,...)
        void searchBooks(const std::string &searchType);

        void searchSection();

        void BooksMenuSearch();

        void BooksMenuSearchChoice();

    
    /////////////////////////
    
    public:
        //TODO - "Menu" :

        /*caller is: "Employee or Customer"*/
        void menuSearch(const std::string &caller);
        /*caller is: "Employee or Customer"*/
        void menuSearchChoice(const std::string &caller);
};

#endif