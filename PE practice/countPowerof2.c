#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int a, i, count = 0;
	scanf("%d", &a);
	
	if (a % 2 == 0){
		for (i = 0; i <= a*10; i++){
		a = a/2;
		count++;
		if (a == 1) break;
		}
	}
	else printf("%d is not a power of 2", a);
	printf("%d", count);
	return 0;
	
}
