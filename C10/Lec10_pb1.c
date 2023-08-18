#include <stdio.h>

int  Solve(char arr[]);

int main(){


        char arr[100], res;
        printf("Enter your string: ");
	fgets(arr, 100, stdin);

        res = Solve(arr);
	
	if(!res){
		printf("\nA character is repeated\n");
	}
	else{
		printf("\nNo character is repeated\n");
	}

        return 0;
}

int Solve(char arr[]){

        int i, j;

        for (i = 0; arr[i] != '\0'; i++){
                for(j = i+1; arr[j] != '\0'; j++){
                        if(arr[i] == arr[j]){
                                return 0;
                        }
                }
        }
	return 1;
}
