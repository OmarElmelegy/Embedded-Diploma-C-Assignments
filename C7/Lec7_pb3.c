#include <stdio.h>

int solve(unsigned long long arr[], int size, int n);

int main(){

	unsigned long long arr[100] = {1};
	int n, size, i;

	printf("Enter a size for the array: ");
	scanf("%d", &size);
	
	if(size < 0 || size > 100){
		printf("Invalid size, please enter size between 0 and 100[maximum amount of memory allowed]\n");
		return 0;
	}
	
	printf("Enter a number of a term to get: ");
	scanf("%d", &n);

	if(n > size || n < 0){
		printf("Invalid number of term\n");
	}
	else{
		solve(arr, size, n);
	}

	return 0;
}

int solve(unsigned long long arr[], int size, int n){

	int i;

	for(i = 1; i<size; i++){
                arr[i] = arr[i-1] * 3;
        }

	printf("The term number %d of this series is: %llu\n", n, arr[n - 1]);

	return 0;
}

