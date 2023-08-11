#include <stdio.h>
#include <stdbool.h>

int fPrime(int number);

int main(){

	int l,r,temp;
	printf("Enter two numbers as limits to get each prime number between them: ");
	scanf("%d %d", &l, &r);

	if(r < l){
		temp = r;
		r = l;
		l = temp;
	}
	
	for(int i=l; i<=r; i++){
		if(fPrime(i) == 0){
			printf("%d ", i);	
		}
	}
	printf("\n");

	return 0;
}


int fPrime(int number){

	int counter = 0;
	bool flag = 0;		
	for(int i=1 ; i <= number ; i++){
		if(number%i == 0){
			counter++;
		}
		if((counter > 2) || (number == 1)){
			flag = 1;
			break;
		}
	}
	return flag;
}

