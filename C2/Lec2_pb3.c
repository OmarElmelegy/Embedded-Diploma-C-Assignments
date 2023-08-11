#include <stdio.h>

int main(){

	int num,bitnum,res;
	printf("Enter a number and a bit number: ");
	scanf("%d %d", &num,&bitnum);
	
	res = (num>>bitnum) & 1;
	
	printf("In the number %d, the bit number %d is : %d\n",num,bitnum,res);
	return 0;
}
