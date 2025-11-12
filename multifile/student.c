// student.c
#include <stdio.h>
#include <string.h>
#include "student.h"

void addStudent(Student* students, int* count) {
    printf("Enter student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter student name: ");
    scanf("%s", students[*count].name);
    printf("Enter marks1: ");
    scanf("%f", &students[*count].marks1);
    printf("Enter marks2: ");
    scanf("%f", &students[*count].marks2);
    (*count)++;
}

void displayStudents(Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Marks1: %.2f, Marks2: %.2f\n", students[i].id, students[i].name, students[i].marks1, students[i].marks2);
    }
}

Student* findStudentByID(Student* students, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            return &students[i];
        }
    }
    return NULL;
}

void calculateAverageMarks(Student* students, int count) {
    for (int i = 0; i < count; i++) {
        float average = (students[i].marks1 + students[i].marks2) / 2;
        printf("ID: %d, Name: %s, Average Marks: %.2f\n", students[i].id, students[i].name, average);
    }
}
