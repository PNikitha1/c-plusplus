#ifndef __BOOK_H
#define __BOOK_H

#include<string>
#include<iostream>
class Book
{
    std::string m_isbn;
    std::string m_title;
    std::string m_author;
    double m_price;
    int n_pages;
    int n_year;
    //Publisher
    public:
    Book(std::string isbn, std::string title, std::string author,
        double price, int pages, int year);
    std::string get_isbn() const;
    std::string get_title() const;
    std::string get_author() const;
    double get_price() const;
    int get_pages() const;
    int get_year() const;
    void display() const;
    //Constructor
    //getter functions
    //TODO: display
};

#endif