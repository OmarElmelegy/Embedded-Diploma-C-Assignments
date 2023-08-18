#include <stdio.h>

void  Solve(char arr[]);

int main(){


        char arr[100];
        printf("Enter your string: ");
        fgets(arr, 100, stdin);

        Solve(arr);
	
	printf("\n");

	puts(arr);

        return 0;
}

void Solve(char arr[]){

        int i;

        for (i = 0; arr[i] != '\0'; i++){
        	if(arr[i] >= 'A' &&  arr[i] <= 'Z'){
			arr[i] += 32;
		}
        }
}
