// book.c
#include <stdio.h>
#include <string.h>
#include "book.h"

void addBook(Book* books, int* count) {
    printf("Enter book ID: ");
    scanf("%d", &books[*count].id);
    printf("Enter book title: ");
    scanf("%s", books[*count].title);
    printf("Enter book author: ");
    scanf("%s", books[*count].author);
    (*count)++;
}

void displayBooks(Book* books, int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
    }
}

Book* searchBookByTitle(Book* books, int count, const char* title) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            return &books[i];
        }
    }
    return NULL;
}

Book* searchBookByAuthor(Book* books, int count, const char* author) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            return &books[i];
        }
    }
    return NULL;
}
