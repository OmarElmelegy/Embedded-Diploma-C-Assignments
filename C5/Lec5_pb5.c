#include <stdio.h>

int fCheck(int num);

int main(){

	int x, res;
	printf("Enter a number to check: ");
	scanf("%d", &x);

	res = fCheck(x);

	printf("%d\n", res);
	
	return 0;
}

int fCheck(int num){

	int flag = -1;
	if(num == 1){
		return flag;
	}
	if((num & (num - 1)) == 0){
		flag = 1;
		return flag;
	}

	while(num > 1){
		if(num % 3 != 0){
			return flag;
		}
		num /= 3;
	}
	if(num % 3 == 1){
		flag = 0;
	}

	return flag;
}
