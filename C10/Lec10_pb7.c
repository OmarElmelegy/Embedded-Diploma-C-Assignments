#include <stdio.h>

void Solve(char arr[], int length);
int _strlen(char arr[]);

int main(){


        char arr[100] ;
        int length;
        printf("Enter your string: ");
        fgets(arr, 100, stdin);

        length = _strlen(arr);
	Solve(arr, length);
	
	printf("\n");

        puts(arr);

	return 0;
}

int  _strlen(char arr[]){

        int i, counter = -1;

        for (i = 0; arr[i] != '\0'; i++){
                counter ++;
        }

        return counter;
}

void Solve(char arr[], int size){
	int temp, j;

	for(j = 0; j<(size/2); j++){
		temp = arr[size-j-1];
		arr[size-j-1] = arr[j];
		arr[j] = temp;
	}
}
