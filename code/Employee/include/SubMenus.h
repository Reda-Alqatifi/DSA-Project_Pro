#ifndef SubMenus_H
#define SubMenus_H

class SubMenus
{
    protected:
        void addMenu();
        void addMenuChoice();

        void removeMenu();
        void removeMenuChoice();
        
        void updateMenu();
        void updateMenuChoice();

        void totalMenu();
        void totalMenuChoice();

        //! for all users:
        void dispalyMenu();
        void dispalyMenuChoice();

        void searchMenu();
        void searchMenuChoice();

        void sortMenu();
        void sortMenuChoice();
};

#endif