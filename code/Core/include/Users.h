#ifndef USERS_H
#define USERS_H

#include <string>
#include "Books.h"
#include <fstream>

struct Customer
{
    private:
        std::string Email;
        std::string password;

    public:
        std::string name;

        int numBorrowedBooks;
        BLinkedList *Borrowedbooks;

        int numBoughtBooks;
        BLinkedList *Boughtbooks;
};

struct Employee
{
    private:
        std::string Email;
        std::string password;
        const int keyCode;
        
    public:
        std::string name;
};

class SignIn
{
    public:
        void EmployeeSignIn();

        void CustomerSignIn();
};


#endif