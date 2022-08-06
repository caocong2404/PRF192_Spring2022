#include <stdio.h>
#include<math.h>

int main(){
	int a[5] = {0}, x = 2111223;	
	while ( x > 10){
		a[x % 10 - 1]++;
		x/=10;
	}
	printf("%d", a[1]);
	return 0;
}
