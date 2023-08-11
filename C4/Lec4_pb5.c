#include <stdio.h>

int main(){

	unsigned long long num, copy, revnum;
	int rem;

	printf("Enter a number to reverse: ");
	scanf("%lld", &num);
	
	if(num > 0){
		copy = num;
		while(copy > 0){
			rem = copy%10;
			revnum += rem;
			revnum *= 10;
			copy /= 10;
		}
		revnum /= 10;
		printf("The reverse of %lld is : %lld \n", num, revnum);
	}
	else{
		printf("Cannot find reverse number, enter a valid number..\n");
	}
	
	return 0;
}
