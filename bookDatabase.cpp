#include "bookDatabase.h"
#include "lib/sqlite3.h"
#include <iostream>
#include <string>

bookDatabase::bookDatabase(){

}

int bookDatabase::setDB(std::string dbAddress){
    bookDatabase::resultCode = sqlite3_open(dbAddress, &DB);

    return bookDatabase::resultCode;
}
