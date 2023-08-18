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


void Solve(char arr[],int length){
        int temp, i, j;

        for(i = 0; arr[i] != '\0'; i++){
		if(!((arr[i] >= 'A' && arr[i] <= 'Z')||(arr[i] >= 'a' && arr[i] <= 'z'))){
			for(j = i; j < length; j++){
				arr[j] = arr[j+1];
			}
		arr[length - 1] = '\0';
		length--;
		i--;
        	}
	}
}
