#ifndef Sections_H
#define Sections_H

#include "Books.h" //! to insert the books into the sectons

//* Section data
struct Section
{
    std::string name;
    int booksNum;

    int No; //! just to count them, and to use them in term of adding books 
};

//////

//! Linked List for sections
struct NodeSection
{
    Section section;

    BLinkedList books; //! for Nested Linked List
    NodeSection *next;
    NodeSection *previous;
};

struct SLinkedList
{
    NodeSection *head;
    NodeSection *tail;
};

//! to intialize "head & tail" of this object by "NULL"
extern SLinkedList sectionsList;

#endif