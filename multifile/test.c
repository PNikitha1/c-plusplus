// main.c
#include <stdio.h>
#include "book.h"

#define MAX_BOOKS 100

int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        printf("1. Add a new book\n");
        printf("2. Display all books\n");
        printf("3. Search for a book by title\n");
        printf("4. Search for a book by author\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3: {
                char title[100];
                printf("Enter book title: ");
                scanf("%s", title);
                Book* book = searchBookByTitle(books, count, title);
                if (book) {
                    printf("ID: %d, Title: %s, Author: %s\n", book->id, book->title, book->author);
                } else {
                    printf("Book with title '%s' not found.\n", title);
                }
                break;
            }
            case 4: {
                char author[50];
                printf("Enter book author: ");
                scanf("%s", author);
                Book* book = searchBookByAuthor(books, count, author);
                if (book) {
                    printf("ID: %d, Title: %s, Author: %s\n", book->id, book->title, book->author);
                } else {
                    printf("Book with author '%s' not found.\n", author);
                }
                break;
            }
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
