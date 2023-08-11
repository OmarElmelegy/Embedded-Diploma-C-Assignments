#include <stdio.h>

int fholes(int number);

int main(){

	int givenNumber, sum = 0;
	printf("Enter a number to count the holes in: ");
	scanf("%d", &givenNumber);
	
	int copy = givenNumber;
	if(copy < 0){
		copy *= -1;
	}
	while(copy > 0){
		int digit = copy%10;
		copy /= 10;

		sum += fholes(digit);
	}
	
	printf("The number of holes in %d is : %d \n", givenNumber, sum);

	return 0;
}


int fholes(int number){

	if((number == 0) || (number == 4) || (number == 6) || (number == 9)){
		return 1;
	}

	else if(number == 8){
		return 2;
	}
	else{
		return 0;
	}

}
