#include <stdio.h>
#include <math.h>

int main(){
	int decimal, binary = 0;
	int p = 0;
	scanf("%d", &decimal);
	while (decimal > 0){
		binary += (decimal % 2) * pow(10, p);
		decimal = decimal / 2;
		++p;
	}
	printf("%d", binary);
	
	return 0;
}
