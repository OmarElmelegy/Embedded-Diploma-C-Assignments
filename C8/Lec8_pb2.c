#include <stdio.h>

int solve(int arr[], int size, int n);

int main(){

	int arr[100], n, size, i;

	printf("Enter a size for the array: ");
	scanf("%d", &size);
	
	if(size < 0 || size > 100){
		printf("Invalid size, please enter a size between 0 and 100\n");
		return 0;
	}

	for(i = 0; i<size; i++){
                printf("Enter element number [%d]: ", i+1);
                scanf("%d",&arr[i]);
        }

	printf("Enter a number to check for last occurance: ");
	scanf("%d", &n);

	printf("%d \n",solve(arr, size, n));

	return 0;
}

int solve(int arr[], int size, int n){
	int flag = 0, j, occur;

	for(j = 0; j<size; j++){
		if(arr[j] == n){
			occur = j;
			flag = 1;
		}
	}
	if(!flag){
		return -1;
	}
	else{
		return occur;
	}
}

