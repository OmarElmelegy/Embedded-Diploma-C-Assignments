#include <stdio.h>

int main(){

	float x,y,res;
	printf("Enter two floats: ");
	scanf("%f %f", &x, &y);
	res = x + y;
	int newres = (int) res;

	printf("%f + %f = %f ==> %d\n", x, y, res, newres);

	return 0;
}
