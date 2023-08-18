#include <stdio.h>

void Solve(char arr1[], int length1, char arr2[], int length2, char arrC[]);
int _strlen(char arr[]);

int main(){


        char arr1[100], arr2[100] , arrC[200];
        int length1, length2;

        printf("Enter your first string: ");
        fgets(arr1, 100, stdin);
	printf("Enter your second string: "); 
        fgets(arr2, 100, stdin);

        length1 = _strlen(arr1);
	length2 = _strlen(arr2);

        Solve(arr1, length1, arr2, length2, arrC);

        printf("\n");

        puts(arrC);

        return 0;
}

int  _strlen(char arr[]){

        int i, counter = -1;

        for (i = 0; arr[i] != '\0'; i++){
                counter ++;
        }

        return counter;
}


void Solve(char arr1[], int length1, char arr2[], int length2, char arrC[]){

	int lengthC = length1 + length2, i;
	
	for(i = 0; i < lengthC; i++){
		if(i < length1){
			arrC[i] = arr1[i];
		}
		else{
			arrC[i] = arr2[i - length1];
		}
	}
}
