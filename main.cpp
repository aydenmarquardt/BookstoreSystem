#include <iostream>
#include <string>
#include "sqlite3.h"
#include "bookDatabase.h"

int main(){
    
    // create bookDatabase object on stack
    bookDatabase *db = new bookDatabase();

    int* isOpen = new int; 
    
    std::string bookDatabaseAddress = "BookSystem.db";

    *isOpen = db->setDB(bookDatabaseAddress);

    std::cout<<*isOpen<<std::endl;

    delete isOpen;

    delete(db);

    return 0;
}