#include <stdio.h>

int main(){
	
	char c, newc;
	printf("Enter a lowercase character: ");
	scanf("%c", &c);
	if ( c < 97 || c > 122){
	printf("Invalid lowercase character\n");
	}
	else{
	newc = c - 32;
	printf("%c : %c\n", c, newc);
	}
	
	return 0;
}
