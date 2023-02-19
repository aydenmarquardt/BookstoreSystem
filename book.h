// define book.h and make sure it cant be added twice
#ifndef BOOK_H_EXISTS
#define BOOK_H_EXISTS

#include "lib/sqlite3.h"
#include <string>

class book{
    private:
        sqlite3* DB;

    public:
        // constructors
        book();
        book(sqlite3* DB);
        
        // get book methods
        std::string* getBook(int id, std::string title, std::string author, int yearPub);
        
        // method to add book
        int addBook(std::string title, std::string author, double price, int yearPub, int numPages, int numCopys);
        
        // check availibility of book methods
        int bookAvailibility(int id, std::string title, std::string author);

        // delete books method
        int deleteBook(int id, std::string title, std::string author, int yearPub);

        // setter method
        void setDB(sqlite3* DB);
};

#endif