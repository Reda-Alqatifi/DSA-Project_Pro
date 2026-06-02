#ifndef SubMenus_H
#define SubMenus_H

class SubMenus
{
    protected:
        void BorrowMenu();
        void BorrowMenuChoice();

        void BuyMenu();
        void BuyMenuChoice();
        
        void returnBookMenu();
        void returnBookMenuChoice();

        //! for all users:
        void dispalyMenu();
        void dispalyMenuChoice();

        void searchMenu();
        void searchMenuChoice();

        void sortMenu();
        void sortMenuChoice();
};

#endif