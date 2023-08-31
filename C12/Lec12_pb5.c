#include <stdio.h>

void copy_arr(int *arr1, int *arr2,int size);

int main(){

	int arr1[100], arr2[100], size, i = 0;
	printf("Enter array size, between 1, and 100: ");
	scanf("%d", &size);

	if (size > 100 || size < 1){
		printf("Please enter another valide size..");
		return 0;
	}

	for (i = 0; i < size; i++){
		printf("Enter element [%d]: ", i+1);
		scanf("%d", &arr1[i]);
	}

	copy_arr(arr1, arr2, size);

	for (i = 0; i < size; i++){
                printf("Element [%d] in the second array: %d\n", i+1, arr2[i]);
        }
		

	return 0;
}


void copy_arr(int *arr1, int *arr2, int size){

	int j = 0;
	for (j = 0; j < size; j++){
		*(arr2 + j) = *(arr1 + j);
	}

}

