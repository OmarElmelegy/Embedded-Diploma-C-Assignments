#include <stdio.h>

void solve(int arr1[],int arr2[],int size);

int main(){

	int arr1[100], arr2[100], size, i, k;

	printf("Enter a size for both the array: ");
	scanf("%d", &size);

	if(size < 0 || size > 100){
		printf("Invalid size, please enter a size between 0 and 100\n");		return 0;
	}

	for(i = 0; i<size; i++){
                printf("Enter element number [%d] for the first array: ", i+1);
                scanf("%d",&arr1[i]);
        }

	printf("\nEnd of first array input\n\n");

	for(k = 0; k<size; k++){
                printf("Enter element number [%d] for the second array: ", k+1);
                scanf("%d",&arr2[k]);
        }

	solve(arr1, arr2, size);
	
	printf("\nfirst array: [");
	for(i = 0; i<size-1; i++){
                printf("%d, ", arr1[i]);
        }
	printf("%d]\n", arr1[i]);

	printf("second array: [");
        for(k = 0; k<size-1; k++){
                printf("%d, ", arr2[k]);
        }
        printf("%d]\n", arr2[k]);

	return 0;
}

void solve(int arr1[], int arr2[], int size){
	int temp, j;
	
	for(j = 0; j<size; j++){
		temp = arr1[j];
		arr1[j] = arr2[j];
		arr2[j] = temp;
	}
}

