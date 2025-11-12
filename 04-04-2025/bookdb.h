#ifndef __BOOKDB_H
#define __BOOKDB_H
#include"book.h"
#include<vector>
class BookDb
{
    std::vector<Book> books;
    public:
    void addBook(std::string isbn, std::string title, std::string author,
            double price, int pages, int year);
    void displayAllTitles();
    void displayAll();
    bool isBookFound(std::string key);
    Book* findBookByISBN(std::string key);
    double findAveragePrice();
    double findMaxPriceOfAllBooks();
    Book* findBookWithMaxPrice();
    int countBooksByYearOfPublishing(int kyear);
};

#endif