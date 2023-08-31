#include <stdio.h>

void swap_arr(int *arr1, int *arr2,int size);

int main(){

	int arr1[100], arr2[100], size, i = 0;
	printf("Enter array size, between 1, and 100: ");
	scanf("%d", &size);

	if (size > 100 || size < 1){
		printf("Please enter another valid size..");
		return 0;
	}

	for (i = 0; i < size; i++){
		printf("Enter element [%d] in first array: ", i+1);
		scanf("%d", &arr1[i]);
	}

	for (i = 0; i < size; i++){
                printf("Enter element [%d] in second array: ", i+1);
                scanf("%d", &arr2[i]);
        }


	swap_arr(arr1, arr2, size);

	for (i = 0; i < size; i++){
                printf("Element [%d] in the first array: %d\n", i+1, arr1[i]);
        }

	printf("\n");
	
	for (i = 0; i < size; i++){
                printf("Element [%d] in second array: %d\n", i+1, arr2[i]);
	}

	return 0;
}

void swap_arr(int *arr1, int *arr2, int size){

	int j = 0, temp;
	for (j = 0; j < size; j++){
		temp = *(arr1 + j);
		*(arr1 + j) = *(arr2 + j);
		*(arr2 +j) = temp;
	}

}
