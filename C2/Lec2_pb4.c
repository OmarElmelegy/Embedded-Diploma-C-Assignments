#include <stdio.h>

int main(){

	int num;
	printf("Enter a three-digit number please : ");
	scanf("%d", &num);
	
	printf("\t%d\t%d\t%d\t\n", (num/100),((num/10)%10),(num%10));

	return 0;
}
