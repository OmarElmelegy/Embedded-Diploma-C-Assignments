#include <stdio.h>

int solve(int arr[], int size, int n);

int main(){

	int arr[100], n, size, i;

	printf("Enter a size for the array: ");
	scanf("%d", &size);

	for(i = 0; i<size; i++){
                printf("Enter element number [%d]: ", i+1);
                scanf("%d",&arr[i]);
        }

	printf("Enter a number to check for first occurance: ");
	scanf("%d", &n);

	printf("%d \n",solve(arr, size, n));

	return 0;
}

int solve(int arr[], int size, int n){
	int flag = 0, j;

	for(j = 0; j<size; j++){
		if(arr[j] == n){
			return j;
			flag = 1;
		}
	}
	if(!flag){
		return -1;
	}
}
