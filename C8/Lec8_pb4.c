#include <stdio.h>

void solve(int arr[], int size);

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

	solve(arr, size);
	
	printf("\nAfter change\n\n");

	for(i = 0; i<size; i++){
                printf("Element number [%d]: %d\n", i+1, arr[i]);
        }

	return 0;
}

void solve(int arr[], int size){
	int temp, j;

	for(j = 0; j<(size/2); j++){
		temp = arr[size-j-1];
		arr[size-j-1] = arr[j];
		arr[j] = temp;
	}
}


