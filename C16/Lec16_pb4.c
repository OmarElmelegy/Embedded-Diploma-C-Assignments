#include <stdio.h>
#include "../STD_TYPES.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float grade;
} Student;

// Prototypes
void fillStudents(Student *ptr, int size);
void printStudents(Student *ptr, int size);


int main(){
    Student students[10];
    fillStudents(students, 10);
    printStudents(students, 10);
    return 0;
}


void fillStudents(Student *ptr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Enter name, id, and grade for student %d: ", i+1);
        scanf("%s %d %f", (ptr+i)->name, &(ptr+i)->id, &(ptr+i)->grade);
    }
}


void printStudents(Student *ptr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Student %d details: \n", i+1);
        printf("Name: %s\n", (ptr+i)->name);
        printf("ID: %d\n", (ptr+i)->id);
        printf("Grade: %.2f\n", (ptr+i)->grade);
    }
}