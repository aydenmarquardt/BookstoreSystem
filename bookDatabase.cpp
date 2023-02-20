#include "bookDatabase.h"
#include "sqlite3.h"
#include <string>

bookDatabase::bookDatabase(){
    *bookDatabase::resultCode = -1;
}

bookDatabase::~bookDatabase(){
    delete bookDatabase::resultCode;
}

int bookDatabase::setDB(std::string dbAddress){
    *bookDatabase::resultCode = sqlite3_open(dbAddress.c_str(), &DB);

    return *bookDatabase::resultCode;
}


