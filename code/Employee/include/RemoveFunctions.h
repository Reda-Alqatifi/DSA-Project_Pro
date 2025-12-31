#ifndef REMOVEFUNCTIONS_H
#define REMOVEFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Remove
{
    private:
        //TODO - Remove "Books" :

        //! to remove the node 'book'
        void removeBookNested(NodeBook *book , NodeSection *sec);
        void removeBook( NodeBook *book);

        //? may chenged by BST
        //! to search about the book we want to remove, caller is for specify if nested or not
        bool searchToRemove(std::string code , std::string section , const std::string &caller);

        //////////////

        //TODO - Remove "Section" :
        
        //! to remove the node 'section'
        void removeSection(NodeSection *current , std::string &section);

        /////////////

        //! to get the section from the number instade of its name. (for both section and book)
        /*caller is to decide if it is for removing 'book' or 'section' */
        std::string sectionsLoopToRemove(std::string &section , const std::string &caller);

        //! to let the user write the book information.
        void writeToRemove(const std::string &caller);
    
    /////////////////////////
    
    public:
        //TODO - "Menu" :

        void menuRemove(); //! Add functions menu
        void menuRemoveChoice(); //! Loop to choese which you want to add
};

#endif