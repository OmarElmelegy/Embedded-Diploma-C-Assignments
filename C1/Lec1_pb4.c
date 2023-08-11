#include <stdio.h>

int main(){
	float r, pi = 3.14;
	printf("Enter radius of a circle: ");
	scanf("%f", &r);
	float a = r*r*pi;
	float c = 2*r*pi;
	printf("Area =  %0.2f\nCircumference = %0.2f\n",a,c);
	return 0;
}
