#include <stdio.h>
#include <math.h>

int BinarytoDecimal(int number){
	int lastValue, decimal = 0, p = 0; 
	while (number != 0){
		lastValue = number % 10;
		decimal = decimal + lastValue * pow(2,p);
		number = number / 10;
		++p;
	}
	return decimal;
}
		
int main(){
	long int octal = 0, binary;
	int n = 1, i = 1, lastValue;
	scanf("%d", &binary);
	
	while (binary != 0){
		lastValue = binary % 1000;
		int value = BinarytoDecimal(lastValue);
		octal = octal + value * i;
		i = i * 10;
		binary = binary / 1000;
	}
	printf("%d", octal);
	return 0;
}
