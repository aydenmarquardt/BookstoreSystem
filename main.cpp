#include <iostream>
#include <string>
#include "lib/sqlite3.h"
#include "bookDatabase.h"

int main(){
    
    // create bookDatabase on heap
    bookDatabase* db = new bookDatabase();
    
    return 0;
}