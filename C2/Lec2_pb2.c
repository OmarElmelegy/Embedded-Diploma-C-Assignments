#include <stdio.h>

int main(){

	int num,bitnum;
	printf("Enter number and bit number: ");
	scanf("%d %d",&num,&bitnum);
	
	num ^= (1<<bitnum);
	
	printf("After toggling the bit number: %d, the number is %d\n",bitnum,num);

	return 0;
}
