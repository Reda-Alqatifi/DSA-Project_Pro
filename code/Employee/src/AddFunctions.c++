#include "../include/AddFunctions.h"
#include "code/Core/include/Global.h"

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


//TODO - Add "Sections" :

void Add::insertSectionNode(Section data) //! to Create a new section Node
{
    
}

//! Const sections, that the user will have since the beginning
void Add::baseConstSections() 
{
    
}

//! display entire sections
void Add::sectionsDisplay(const string &type /*Section or Book*/) 
{
    
}
void Add::writeSection(Section &data) //! To write a new Section name
{

}

//! To connect section add Functions togother
void Add::connectSectionsAdding(Section &data) 
{
    
}

void Add::inputSectionLoop(Section &data ) //! To handle the adding in a loop
{

}

/////////

//TODO - add books into a section "Nested Linked List" :

//! just for reusebility of code
void Add::NestedListInsertMethod(NodeBook *currentBook , NodeSection *currentSection)
{
    
}

//! to insert books into thier sections
void Add::insertNestedList(NodeBook *currentBook)
{

    
}

/////////

//TODO - Add "Books" :

void Add::insertBookNode(Book data) //! to Create a new book Node
{
    
}

void Add::writeBook(Book &data , int &counter) //! To write a new Book details
{
    
}

//!To connect book add Functions togethor
void Add::connectBooksAdding(Book &data , int &counter)
{
    
}

void Add::inputBookLoop(Book &data ) //! To handle the adding in a loop
{
    
}

///////////////////////

//TODO - "Menu"

void Add::menuAdd() //! Add functions menu
{

}
void Add::menuAddChoice() //! Loop to choese which you want to add
{

}