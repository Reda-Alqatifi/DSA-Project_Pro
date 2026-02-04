#ifndef ADDFUNCTIONS_H
#define ADDFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Add //!  Done!
{
    private:

        //TODO - Add "Sections" :

        void insertSectionNode(Section data); //! to Create a new section Node
        
        //! Const sections, that the user will have since the beginning
        void baseConstSections();

        void writeSection(Section &data); //! To write a new Section name
        
        void connectSectionsAdding(Section &data); //! To connect section add Functions togethor
        
        void inputSectionLoop(Section &data ); //! To handle the adding in a loop

        /////////

        //! display entire sections
        void sectionsDisplay(const std::string &type /*Section or Book*/);

        /////////

        //TODO - add books into a section "Nested Linked List" :
        
        //! just for reusebility of code
        void NestedListInsertMethod(NodeBook *currentBookMain , NodeSection *currentSection);
        
        //! to insert books into thier sections
        void insertNestedList(NodeBook *currentBookMain);
        
        /////////

        //TODO - Add "Books" :

        void insertBookNode(Book data); //! to Create a new book Node
        
        void writeBook(Book &data , int &counter); //! To write a new Book details

        //!To connect book add Functions togethor
        void connectBooksAdding(Book &data , int &counter);

        void inputBookLoop(Book &data ); //! To handle the adding in a loop
    
    /////////////////////////
    
    //TODO - "Menu" :

    public:
        void menuAdd(); //! Add functions menu
        void menuAddChoice(); //! Loop to choese which you want to add
};

#endif