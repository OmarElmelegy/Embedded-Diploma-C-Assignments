#include <stdio.h>

int main(){
	int x,y;
	printf("Enter Two Numbers: ");
	scanf("%d %d", &x, &y);
	int res = ((x + y) * 3) - 10;
	printf("Result = ((num1+num2) * 3) - 10 = %d\n", res);
	return 0;
}
