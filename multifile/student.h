// student.h
#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int id;
    char name[50];
    float marks1;
    float marks2;
} Student;

void addStudent(Student* students, int* count);
void displayStudents(Student* students, int count);
Student* findStudentByID(Student* students, int count, int id);
void calculateAverageMarks(Student* students, int count);

#endif
