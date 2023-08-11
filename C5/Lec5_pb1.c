#include <stdio.h>

int fcube(int num);

int main(){

	int num,res;

	printf("Enter a number to get the cube of it: ");
	scanf("%d", &num);
	
	res = fcube(num);
	
	printf("%d^3 = %d\n", num, res);

	return 0;
}

int fcube(int num){

	int cube = num*num*num;

	return cube;
}
