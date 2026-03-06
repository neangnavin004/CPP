#include "Library.hpp"
#include "Book.hpp"

#include <tabulate/table.hpp>
using namespace tabulate;

void Library::addBook(Book book) {
    books.push_back(book);
}
void Library::getAllBooks() const {
    Table table;
        table.add_row(
            {"ID", "Title", "Author"}
    );
    
     table[0].format()
    .font_style({FontStyle::bold})
    .font_color({Color::green})
    .font_align({FontAlign::center});
    for (Book book : books) {
            table.add_row(
                {std::to_string(book.getId()), book.getTitle(), book.getAuthor()}
            );
    }

    std::cout << table << std::endl;
}

