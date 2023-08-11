#include <stdio.h>

int main(){

	int temp, time;
	printf("Enter a valid temperature: ");
	scanf("%d", &temp);
	if((temp >= 0) && (temp <= 100)){
		if(temp <= 30){
			time = 7;
		}
		else if(temp <= 60){
			time = 5;
		}
		else if(temp <= 90){
			time = 3;
		}
		else{
			time = 1;
		}
		printf("For a temperature of %d C it would take %d minutes..\n", temp, time);
	}
	else{
		printf("Invalid Temperature..\n");
	}

	return 0;
}
