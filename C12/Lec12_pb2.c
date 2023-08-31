#include <stdio.h>

int _strlen(char *str);

int main(){

	int res;
	char s[30];
	printf("Enter your string [one word]: ");
	scanf("%s", s);
	
	res = _strlen(s);
	printf("The length of the string is: %d\n", res);
	return 0;
}

int _strlen(char *str){
	int size = 0;
	
	while(*(str + size) != '\0'){
		size++;
	}

	return size;
}
