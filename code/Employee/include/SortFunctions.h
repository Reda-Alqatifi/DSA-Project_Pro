#ifndef SORTFUNCTIONS_H
#define SORTFUNCTIONS_H
#include "code/Core/include/Sections.h"

class Sort
{
    private:
        
        //TODO - "Sort ( Merge Sort )" :
    
        //! to split the list into tow lists from the middle
        void splitList(NodeBook *head , NodeBook **firstHalf , NodeBook **secondHalf);

        //! to 'merge' and 'sort' the lists,
        /* caller is :  title , code , author , section , price , or quantity */
        NodeBook *sortedMerge(NodeBook *ListA , NodeBook *ListB , const std::string &caller);

        //! to manage every operations recursivly
        /* caller is :  title , code , author , section , price , or quantity */
        void mergeSort(NodeBook **head , const std::string &caller);
        
    /////////////////////////
    
    public:
        //TODO - "Menu" :

        void menuSort(); //! Add functions menu
        void menuSortChoice(); //! Loop to choese which you want to add
};

#endif