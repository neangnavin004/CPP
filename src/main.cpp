#include "Book.hpp"
#include "Library.hpp"


int main() {

    Library lib;

    lib.addBook({1, "Book1", "Author1"});
    lib.addBook({2, "Book2", "Author2"});

    lib.getAllBooks();

    return 0;
}