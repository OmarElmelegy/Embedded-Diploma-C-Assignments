#include <stdio.h>

int foperation(char c, float num1, float num2);

int main(){
	
	char s;
	float x, y, res;

	printf("Enter operation from [+,-,*,/] and two numbers: ");
	scanf("%c %f %f", &s, &x, &y);
	
	res = foperation(s, x, y);
	
	return 0;
}

int foperation(char c, float num1, float num2){
	
	float result;

	switch(c){
		case '+':
			result = num1 + num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			if(num2 == 0){
				printf("Invalid divide by zero operation..\n");
				return 0;
			}
			else{
				result = num1 / num2;
			}
	}

	printf("%0.3f %c %0.3f = %0.3f\n", num1, c, num2, result);

	return 0;
}
