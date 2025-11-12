// book.h
#ifndef BOOK_H
#define BOOK_H

typedef struct {
    int id;
    char title[100];
    char author[50];
} Book;

void addBook(Book* books, int* count);
void displayBooks(Book* books, int count);
Book* searchBookByTitle(Book* books, int count, const char* title);
Book* searchBookByAuthor(Book* books, int count, const char* author);

#endif
