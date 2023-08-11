#include <stdio.h>

int DecToBinary(int num);

int main(){

	int n, res, counter = 0, copy;
	printf("Enter a number to check how many 1s in its binary: ");
	scanf("%d", &n);

	res = DecToBinary(n);
	copy = res;

	do{
		if(copy%10 == 1){
			counter++;
		}
		copy /= 10;
	}while(copy);
	
	printf("The binary for %d is %d, and the number of 1s in it is: %d\n", n, res, counter);

	return 0;

}


int DecToBinary(int num){

	int binary, rem, place = 1;

	while(num > 0){
		rem = num % 2;
		num /= 2;
		binary += rem * place;
                place = place * 10;
	}

	return binary;
}
