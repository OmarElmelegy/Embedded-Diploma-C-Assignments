#include <stdio.h>

void  SelectionSort(int arr[], int size);

int main(){

	int arr[100], i, j, size;

	printf("Enter your array size [1 - 100] : ");
	scanf("%d", &size);

	if(size < 1 || size > 100){
		printf("Enter valid array size");
		return 0;
	}

	for(i = 0; i<size; i++){
		printf("Element [%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	SelectionSort(arr, size);
	
	printf("\nAfter Sorting : \n \n");

	for(j = 0; j<size; j++){
                printf("Element [%d] : %d\n", j, arr[j]); 
        }

	return 0;
}

void SelectionSort(int arr[], int size){

	int temp, i, j, min_index;

	for (i = 0; i<size-1; i++ ){
		min_index = i;
		// We find the minimal here
		for(j = i+1; j<size; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		// The next line is for optimization if next elements are all larger
		// We do the swap here --> we swap arr[i] with the minimal we found then start a new round
		if( i != min_index){
			temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
}
