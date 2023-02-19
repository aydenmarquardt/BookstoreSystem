#include "book.h"
#include "lib/sqlite3.h"
#include <iostream>
#include <string>

book::book(){

}

book::book(sqlite3* DB){
    book::DB = DB;
}

std::string* book::getBook(int id, std::string title, std::string author, int yearPub){

}

int book::addBook(std::string title, std::string author, double price, int yearPub, int numPages, int numCopys){

}

int book::bookAvailibility(int id, std::string title, std::string author){

}

int book::deleteBook(int id, std::string title, std::string author, int yearPub){

}

void book::setDB(sqlite3* DB){
    
}