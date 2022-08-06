#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int remainder, decimal;
	int p = 0;
	scanf("%d", &n);
	while (n != 0){
		remainder = n%10;
		n = n/10;
		decimal += remainder*pow(2,p);
		++p;
	}
	printf("%d", decimal);
	
	return 0;
}
