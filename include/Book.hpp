
#pragma once

#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
public:
    Book(int id, std::string title, std::string author);
    void display_info() const;
};