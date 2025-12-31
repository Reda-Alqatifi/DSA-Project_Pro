#ifndef BOOKS_H
#define BOOKS_H

//! it will be used in all files without writing it in each file
#include <string> 

///////

//* Book data
struct Book
{
    std::string title;
    std::string author;
    std::string code;
    std::string section;
    float price;
    int quantity;

    int No; //! just to count them
};

//! Doubly Linked List for books
struct NodeBook
{
    Book book;

    NodeBook *next;
    NodeBook *previous;
};

struct BLinkedList
{
    NodeBook *head;
    NodeBook *tail;
};

//! to intialize "head & tail" of this object by "NULL"
extern BLinkedList booksList; 


#endif