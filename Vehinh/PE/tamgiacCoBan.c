#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int n, i , j;
	scanf("%d", &n);
	//ve hinh
	for(i = 0; i < n; i++){
		for (j = 0; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	
	return 0;
}
