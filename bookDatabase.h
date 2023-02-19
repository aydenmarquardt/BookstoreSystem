// define book.h and make sure it cant be added twice
#ifndef BOOKDATABASE_H_EXISTS
#define BOOKDATABASE_H_EXISTS

#include "lib/sqlite3.h"
#include <string>

class bookDatabase{
    private:
        sqlite3* DB;
        int resultCode;
    public:
        // constructors
        bookDatabase();
        
        // destructor
        ~bookDatabase();

        // get book methods
        std::string* getBook(int id, std::string title, std::string author, int yearPub);
        
        // method to add book
        int addBook(std::string title, std::string author, double price, int yearPub, int numPages, int numCopys);
        
        // check availibility of book methods
        int bookAvailibility(int id, std::string title, std::string author);

        // delete books method
        int deleteBook(int id, std::string title, std::string author, int yearPub);

        // getter and setter method
        int setDB(std::string dbAdress);
};

#endif