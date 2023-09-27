#include <stdio.h>
#include "../STD_TYPES.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    sint8 Hour, Minute, Second;
}Time_t;

// Prototypes
void CalculateDiffInTime(Time_t Time1, Time_t Time2);

void main(){
    Time_t* Time1;
    Time_t* Time2;

    Time1 = (Time_t *) malloc(sizeof(Time_t));
    Time2 = (Time_t *) malloc(sizeof(Time_t));

    printf("Enter Time1 Hours: ");
    if(!scanf("%hhd", &Time1->Hour) || Time1->Hour > 24){
        printf("Enter valid Hour..\n");
    }
    printf("Enter Time1 Minutes: ");
    if(!scanf("%hhd", &Time1->Minute) || Time1->Minute > 59){
        printf("Enter valid minute..\n");
    }
    printf("Enter Time1 Seconds: ");
    if(!scanf("%hhd", &Time1->Second) || Time1->Second > 59){
        printf("Enter valid second..\n");
    }
    printf("Enter Time2 Hours: ");
    if(!scanf("%hhd", &Time2->Hour) || Time2->Hour > 24){
        printf("Enter valid Hour..\n");
    }
    printf("Enter Time2 Minutes: ");
    if(!scanf("%hhd", &Time2->Minute) || Time2->Minute > 59){
        printf("Enter valid minute..\n");
    }
    printf("Enter Time2 Seconds: ");
    if(!scanf("%hhd", &Time2->Second) || Time2->Second > 59){
        printf("Enter valid second..\n");
    }
    

    CalculateDiffInTime(*Time1, *Time2);

    free(Time1);
    free(Time2);
}

void CalculateDiffInTime(Time_t Time1, Time_t Time2){
    uint8 Hours = abs(Time1.Hour - Time2.Hour);
    uint8 Minutes = abs(Time1.Minute - Time2.Minute);
    uint8 Seconds = abs(Time1.Hour - Time2.Hour);

    printf("The difference between the two times is: %hhd Hours, %hhd Minutes, %hhd Seconds..\n", Hours, Minutes, Seconds);
}