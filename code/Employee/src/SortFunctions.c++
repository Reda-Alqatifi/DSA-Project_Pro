#include "../include/SortFunctions.h"
#include "code/Core/include/Global.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//TODO - "Sort ( Merge Sort )" :

//! to split the list into tow lists from the middle
void Sort::splitList(NodeBook *head , NodeBook **firstHalf , NodeBook **secondHalf)
{

}

//! to 'merge' and 'sort' the lists,
/* caller is :  title , code , author , section , price , or quantity */
NodeBook *Sort::sortedMerge(NodeBook *ListA , NodeBook *ListB , const std::string &caller)
{

}

//! to manage every operations recursivly
/* caller is :  title , code , author , section , price , or quantity */
void Sort::mergeSort(NodeBook **head , const std::string &caller)
{

}

/////////////////////////

//TODO - "Menu" :

void Sort::menuSort() //! Add functions menu
{

}
void Sort::menuSortChoice() //! Loop to choese which you want to add
{

}