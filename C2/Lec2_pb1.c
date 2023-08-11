#include <stdio.h>

int main(){
	int num,bitnum;
	printf("Enter a number and a bit number: ");
	scanf("%d %d",&num,&bitnum);
	
	num &= ~(1<<bitnum);
	printf("The number after clearing bit number %d is: %d\n",bitnum,num);

	return 0;
}
