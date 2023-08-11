#include <stdio.h>

int main(){
	float c,f;
	printf("Enter temperature in degrees Celsuis: ");
	scanf("%f", &c);
	f = c*9.0/5.0 + 32;
	printf("Temperature in faherenheit is: %0.3f\n", f);

	return 0;
}
