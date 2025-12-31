#ifndef TOTALFUNCTIONS_H
#define TOTALFUNCTIONS_H
#include "code/Core/include/Sections.h"


class Total
{
    private:
        int totalBooks();

        int totalSections();

        int totalBooksInSection(const std::string& sectionName);

        void showDetailedSummary();

    /////////////////////////
    
    public:
        //TODO - "Menu" :

        void menuTotal(const std::string &caller);
        void menuTotalChoice(const std::string &caller);
};

#endif