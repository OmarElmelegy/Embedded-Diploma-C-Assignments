#include <stdio.h>
#include <math.h>

int main(){

	int x,rem;
	printf("Enter a number to check if it's a perfect square: ");
	scanf("%d", &x);
	
	rem = floor(pow(x,0.5));
	if(rem * rem == x){
		printf("%d is a perfect square..\n", x);
	}
	else{
		printf("%d is not a perfect square..\n", x);
	}


	return 0;
}
