#include <stdio.h>

int sum(int *arr, int size);

int main(){

	int arr[100], size, i = 0, res;
	printf("Enter array size, between 1, and 100: ");
	scanf("%d", &size);

	if (size > 100 || size < 1){
		printf("Please enter another valid size..");
		return 0;
	}

	for (i = 0; i < size; i++){
		printf("Enter element [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	res = sum(arr, size);

	printf("The sum is: %d\n", res);

	return 0;
}


int sum(int *arr, int size){

	int sum = 0, j = 0;
	for (j = 0; j < size; j++){
		sum += *(arr + j);
	}

	return sum;
}
