#include <stdio.h>
#include <string.h>

int main(){
	int a;
	a = 10;
	int *p = &a;
	printf("output: %d\n", *p);
	printf("output: %u\n", &a);
	printf("output: %d\n", a);
	return 0;	
}
