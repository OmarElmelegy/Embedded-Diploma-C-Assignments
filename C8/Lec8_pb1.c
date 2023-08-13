#include <stdio.h>

int solve(int arr[], int size);

int main(){

	int arr[100], size, i;

	printf("Enter a size for the array: ");
	scanf("%d", &size);

	if(size < 0 || size > 100){
		printf("Enter a size between 0 and 100[maximum allowed memory]\n");
		return 0;
	}
	
	for(i = 0; i<size; i++){
                printf("Enter element number [%d]: ", i+1);
                scanf("%d",&arr[i]);
        }

	printf("The sum is: %d\n",solve(arr, size));

	return 0;
}

int solve(int arr[], int size){
	
	int sum, j;

	for(j = 0; j<size; j++){
		sum += arr[j];
	}

	return sum;
}

