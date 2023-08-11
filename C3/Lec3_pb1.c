#include <stdio.h>

int main(){

	char c;
	printf("Enter one character: ");
	scanf("%c", &c);
	if( (((c >= 65) && (c <= 90))) || (((c >= 97) && (c <= 122))) ){
	printf("This character is from the alphabet..\n");
	}
	else {
	printf("This character is not from the alphabet..\n");
	}


	return 0;
}
