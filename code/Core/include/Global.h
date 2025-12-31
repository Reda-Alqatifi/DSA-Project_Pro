#ifndef GLOBAL_H
#define GLOBAL_H

#include <string>


class General
{
    public:
        //! Handeling Errors function - (not same data type imput)
        void handleErrors(int &choice);

        //! To change the input case int Lower (small letters), very important in Searching
        void lowerCase(std::string &word); //* changes the orginal value

        //! to print a line from char you want
        //* recommended : length = 50  ,  symbol = '-'
        void printLine(int length , char symbol);
        
        //! to stop the screen till the user click 'Enter' , caller is:  getline  or anything
        void pause(const std::string & caller);

        //! To update the  number "No" of the node, usually we use it befor displaying
        /* caller is  Section or Book */
        void updateNo(const std::string &caller);

        //! Clear memory leak for ponters
        //TODO - We will just use it one time, in the end of the "main()"
        void clearMemoryLeak();

        //! to put a text in the miidle of a space
        std::string centerText(const std::string &text , int width);

        //* doesn't change the orginal value
        std::string UpperCaseFirstLetter(std::string text); 
};

/////////////////////////


#endif