#include "Library.hpp"
#include "Book.hpp"

void Library::addBook(Book book) {
    books.push_back(book);
}
void Library::getAllBooks() const {
    for (Book book : books) {
        book.display_info();
    }
}