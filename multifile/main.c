// main.c
#include <stdio.h>
#include "student.h"

#define MAX_STUDENTS 100

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("1. Add a new student\n");
        printf("2. Display all students\n");
        printf("3. Find the details of a student by their ID\n");
        printf("4. Calculate the average of marks for each student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3: {
                int id;
                printf("Enter student ID: ");
                scanf("%d", &id);
                Student* student = findStudentByID(students, count, id);
                if (student) {
                    printf("ID: %d, Name: %s, Marks1: %.2f, Marks2: %.2f\n", student->id, student->name, student->marks1, student->marks2);
                } else {
                    printf("Student with ID %d not found.\n", id);
                }
                break;
            }
            case 4:
                calculateAverageMarks(students, count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
