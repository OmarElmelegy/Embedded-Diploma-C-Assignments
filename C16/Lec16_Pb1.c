#include <stdio.h>
#include "../STD_TYPES.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// Prototypes
bool isNumber(char* numberString);
bool isAlphaString(char* str);


typedef struct
{
    sint8 name[30], id[8];
	
	sint8 physics, maths;
}Student_t;

int main(void){
    Student_t NewStudent;
    printf("Enter the name for the student: ");
    scanf("%20s", NewStudent.name);
    if(!isAlphaString(NewStudent.name)){
        printf("You entered an invalid name !");
        return 0;
    }
    printf("Enter the id of the student: ");
    scanf(" %s", NewStudent.id);
    if(!isNumber(NewStudent.id)){
        printf("You entered an invalid id !");
        return 0;
    }
    printf("Enter the physics marks of the student: ");
    if(scanf(" %hhd", &NewStudent.physics) != 1 || NewStudent.physics < 0 || NewStudent.maths>60)
	{
        printf("You entered invalid marks!\n");
        return 0;
    }
    printf("Enter the math marks of the student: ");
    if(scanf(" %hhd", &NewStudent.maths) != 1 || NewStudent.maths<0 || NewStudent.maths>60)
	{
        printf("You entered invalid marks!\n");
        return 0;
    }

    printf("The student name is: %s\nhis id number is: %s\nhis marks are:\n Physics: %hhd, Maths: %hhd\n",
     NewStudent.name, NewStudent.id, NewStudent.physics, NewStudent.maths);

}

// Function to check if a number is truly a number in ascii
bool isNumber(char* numberString)
{
    for(int i = 0; i < strlen(numberString); i++)
	{
        if(!isdigit(numberString[i]))
		{
            return false; // if any character is not a digit, return false
        }
    }
	return true;
}

// Function to check if all characters in a string are alphabets
bool isAlphaString(char* str) {
    for(int i = 0; i < strlen(str); i++) {
        if(!isalpha(str[i])) {
            return false;
        }
    }
    return true;
}
