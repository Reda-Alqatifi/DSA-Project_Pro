#include "../include/RemoveFunctions.h"
#include "../include/ESearchFunctions.h" //! for searching by BST
#include "code/Core/include/Global.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;



//TODO - Remove "Books" :

//! to remove the node 'book'
void Remove::removeBookNested(NodeBook *book , NodeSection *sec)
{
    
}
void Remove::removeBook( NodeBook *book)
{
    
}

//? may chenged by BST
//! to search about the book we want to remove, caller is for specify if nested or not
bool Remove::searchToRemove(string code , string section , const string &caller)
{

}

//////////////

//TODO - Remove "Section" :

//! to remove the node 'section'
void Remove::removeSection(NodeSection *current , string &section)
{

}

/////////////

//! to get the section from the number instade of its name. (for both section and book)
/*caller is to decide if it is for removing 'book' or 'section' */
string Remove::sectionsLoopToRemove(string &section , const string &caller)
{

}

//! to let the user write the book information.
void Remove::writeToRemove(const string &caller)
{

}

/////////////////////////


//TODO - "Menu" :

void Remove::menuRemove() //! Remove functions menu
{

} 
void Remove::menuRemoveChoice() //! Loop to choese which you want to Remove
{

} 