/*
    *		i = 0 ; 1 sao 4 2i + 1
   ***		i = 1 ; 3 sao 3
  *****		i = 2 ; 5 sao 2
 *******	i = 3 ; 7 sao 1
*********	i = 4 ; 9 sao 0 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int n, i , j;
	scanf("%d", &n);
	//ve hinh
	for(i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			 if ( j <= n - i) printf(" ");
		}
		for (j = 0; j < 2*i + 1; j++)
		 	printf("* ");
		printf("\n");
	}
	
	
	return 0;
}
