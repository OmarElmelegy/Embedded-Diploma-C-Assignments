#include <stdio.h>

void  BubbleSort(int arr[], int size);

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

        BubbleSort(arr, size);

        printf("\nAfter Sorting : \n \n");

        for(j = 0; j<size; j++){
                printf("Element [%d] : %d\n", j, arr[j]); 
        }

        return 0;
}

void BubbleSort(int arr[], int size){

        int temp, i, j, flag;

        for (i = 0; i < size-1; i++){
		flag = 0;
                for(j = 0; j < size-i-1; j++){
                        if(arr[j] < arr[j+1]){
                                temp = arr[j];
                        	arr[j] = arr[j+1];
                        	arr[j+1] = temp;
				flag = 1;
                        }
                }
		if(!flag){
			//Array is sorted in this case
			break;
		}
        }
}
