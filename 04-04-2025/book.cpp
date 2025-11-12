#include"book.h"

Book::Book(std::string isbn, std::string title, std::string author,
    double price, int pages, int year): m_isbn(isbn), m_title(title), m_author(author), m_price(price), n_pages(pages), n_year(year){}

std::string Book::get_isbn() const{
    return m_isbn;
}

std::string Book::get_title() const{
    return m_title;
}

std::string Book::get_author() const{
    return m_author;
}

double Book::get_price() const{
    return m_price;
}

int Book::get_pages() const{
    return n_pages;
}

int Book::get_year() const{
    return n_year;
}

void Book::display() const{
    std::cout << "ISBN No: " << m_isbn << std::endl;
    std::cout << "Title: " << m_title << std::endl;
    std::cout << "Author: " << m_author << std::endl;
    std::cout << "Price: " << m_price << std::endl;
    std::cout << "Pages: " << n_pages << std::endl;
    std::cout << "Publication Year: " << n_year << std::endl;
    std::cout << "----------------------------------" << std::endl;
}