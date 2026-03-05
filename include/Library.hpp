#pragma once

#include "Book.hpp"
#include <vector>

class Library {
private:
    std::vector<Book> books;
public:
    void addBook(Book book);
    void getAllBooks() const;
};