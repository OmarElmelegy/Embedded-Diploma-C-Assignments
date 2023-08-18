#include <stdio.h>

int  Solve(char arr[]);

int main(){


        char arr[100] ;
	int length;
        printf("Enter your string: ");
        fgets(arr, 100, stdin);

        length = Solve(arr);

        printf("\n%d\n", length);

        return 0;
}

int  Solve(char arr[]){

        int i, counter = -1;

        for (i = 0; arr[i] != '\0'; i++){
                counter ++;
        }

	return counter;
}
