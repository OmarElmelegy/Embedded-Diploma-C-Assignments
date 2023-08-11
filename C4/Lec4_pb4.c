#include <stdio.h>

int main(){

	int num, power;
	unsigned long long res = 1;

	printf("Enter a number and a power to calculate: ");
	scanf("%d %d", &num, &power);

	for(int i = 0; i < power; i++){
		res = res * num;
	}
	
	printf("(%d)^%d = %lld \n", num, power, res);

	return 0;

}
