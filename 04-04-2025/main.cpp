#include "bookdb.h"

int main(){
    BookDb tb;
    tb.addBook("INSBN32455", " Winter", "Nikitha",1000,453,2023);
    tb.addBook("INSBN32452", " Winter in forest", "Pandu",1500,7653,2014);
    tb.addBook("INSBN32432", " Forest", "Lucky",300,434,2012);
    tb.addBook("INSBN32424", " Foret", "Lucy",9700,434,2012);

    tb.displayAllTitles();
    tb.displayAll();
    if(tb.isBookFound("INSBN32432"))
        std::cout << "Book found" << std::endl;
    else
        std::cout << "Book not found" << std::endl;
    tb.findBookByISBN("INSBN32432")->display();
    std::cout << tb.findAveragePrice() << std::endl;
    std::cout << tb.findMaxPriceOfAllBooks() << std::endl;

    tb.findBookWithMaxPrice()->display();

    std::cout << tb.countBooksByYearOfPublishing(2012) <<std::endl;
}