#include <iostream>
#include <string>
#include "lib/sqlite3.h"

int main(){
    
    int exit = 0;
    sqlite3* DB;
    exit = sqlite3_open("CarRentalSystem.db", &DB);
    return 0;
}