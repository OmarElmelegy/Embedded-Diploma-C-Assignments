#include <stdio.h>
#include "../STD_TYPES.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    sint32 Real, Imaginary;
}Complex_t;

// Prototypes
Complex_t AddComplexNumbers(Complex_t num1, Complex_t num2);

void main(){
    Complex_t* num1;
    Complex_t* num2;

    num1 = (Complex_t *) malloc(sizeof(Complex_t));
    num2 = (Complex_t *) malloc(sizeof(Complex_t));

    printf("Enter Real part of Num1: ");
    if(!scanf("%d", &num1->Real)){
        printf("Invalid Real part, enter a valid input..\n");
    }
    printf("Enter Imaginary part of Num1: ");
    if(!scanf("%d", &num1->Imaginary)){
        printf("Invalid Imaginary part, enter a valid input..\n");
    }

    printf("Enter Real part of Num2: ");
    if(!scanf("%d", &num2->Real)){
        printf("Invalid Real part, enter a valid input..\n");
    }
    printf("Enter Imaginary part of Num2: ");
    if(!scanf("%d", &num2->Imaginary)){
        printf("Invalid Imaginary part, enter a valid input..\n");
    }

    Complex_t num3 = AddComplexNumbers(*num1, *num2);

    printf("Sum of the two complex numbers is: %d + %di\n", num3.Real, num3.Imaginary);

    free(num1);
    free(num2);
}

Complex_t AddComplexNumbers(Complex_t num1, Complex_t num2){
    Complex_t num3;
    num3.Real = num1.Real + num2.Real;
    num3.Imaginary = num1.Imaginary + num2.Imaginary;

    return num3;
}