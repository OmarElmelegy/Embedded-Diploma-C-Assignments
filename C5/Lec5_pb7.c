#include <stdio.h>

int DecToBinary(int Decimalnum);
int MaxZerosBetweenOnes(int Binarynum);
int main(){

	int Decimalnum, BinaryNum, MaxZeros;
	printf("Enter a number in decimal: ");
	scanf("%d", &Decimalnum);
	BinaryNum = DecToBinary(Decimalnum);
	MaxZeros = MaxZerosBetweenOnes(BinaryNum);

	printf("%d --> %d, max number of zeros between two ones: %d\n", Decimalnum, BinaryNum, MaxZeros);

	return 0;
}




int DecToBinary(int Decimalnum){

        int binary, rem, place = 1;

        while(Decimalnum > 0){
                rem = Decimalnum % 2;
                Decimalnum /= 2;
                binary += rem * place;
                place = place * 10;
	}

        return binary;
}

int MaxZerosBetweenOnes(int BinaryNum){

	int MaxZeros = 0, CurrentZeros = 0, FoundOne = 0;

	while(BinaryNum > 0){
		if(BinaryNum & 1){	// If the current bit is 1
			if(FoundOne){ // If this is the second one we've found
				if(CurrentZeros > MaxZeros){
					MaxZeros = CurrentZeros;
				}
				CurrentZeros = 0;
			}
			else{ // If this the first one we've found
				FoundOne = 1;
			}
		}
		else{	// If the current bit is 0
			if(FoundOne){
				CurrentZeros++;
			}
		}
		BinaryNum /= 10; // Shift the number right by one bit
		printf("\n %d \n", BinaryNum);
	}
		printf("\n %d \n", MaxZeros);
	return MaxZeros;
}
