#include <stdio.h>

void  InsertionSort(int arr[], int size);

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

        InsertionSort(arr, size);

        printf("\nAfter Sorting : \n \n");

        for(j = 0; j<size; j++){
                printf("Element [%d] : %d\n", j, arr[j]); 
        }

        return 0;
}

void InsertionSort(int arr[], int size)
{
        int i, j;

        for (i = 1; i < size; i++ )
	{
		int key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
        }
}
