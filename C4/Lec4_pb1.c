#include <stdio.h>
#include <stdbool.h>

int main(){

	int number,counter = 0;
	bool flag = false;
	printf("Enter a number to check if it is a prime number or not : ");
	scanf("%d",&number);
		
	for(int i=1 ; i <= number ; i++){
		if(number%i == 0){
			counter++;
		}
		if((counter > 2) || (number == 1)){
			flag = true;
			break;
		}
	}
	
	if(flag){
		printf("This number is not a prime number\n");
	}
	else{
		printf("This number is a prime number..\n");
	}
	return 0;
}
