#include "Book.hpp"

#include <iostream>

Book::Book(int id, std::string title, std::string author){
    this->id = id;
    this->title = title;
    this->author = author;
}
void Book::display_info() const {
    std::cout << "ID:" << id 
         <<", Title" << title 
         << ", Author:" <<author << std::endl;
}

    int Book::getId() const{
        return id;
    }
    std::string Book::getTitle() const{
        return title;
    }
    std::string Book::getAuthor() const{
        return author;
    }