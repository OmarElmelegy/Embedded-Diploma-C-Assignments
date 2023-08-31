#include <stdio.h>

void solve(char *str, char *newstr);

int main(){

	char s[30], ns[4];
	printf("Enter your string [one word]: ");
	scanf("%s", s);
	
	solve(s, ns);

	printf("%s\n", ns);
	return 0;
}

void solve(char *str, char *newstr){
	int size = 0, i = 0;
	
	while (str[size] != '\0'){
		size++;
	}

	newstr[0] = str[size - 1];
	newstr[1] = ' ';
	newstr[2] = str[size - 2];
	newstr[3] = '\0';
}

