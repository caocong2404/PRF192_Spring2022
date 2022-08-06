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
	char hex[100];
	int binary, remainder = 0, i = 0, j;
	
	scanf("%d", &binary);
	int value = BinarytoDecimal(binary);
	while (value != 0)
	{
		remainder = value % 16;
		if (remainder < 10){
			hex[i] = remainder + 48;
		}
		else {
			hex[i] = remainder + 55;
		}
		i++;
		value = value / 16;
	}	
	for (j = i - 1; j >= 0; j--){
		printf("%c",hex[j]);
	}
	return 0;
}
