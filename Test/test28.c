#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
 /*
   * 	i = 0; 1 sao
  **	i = 1; 2 sao
 ***	i = 2; 3 sao
****	i = 3; 4 sao ;;;   	sao >= n - 1 - j
 ***	i = 4; 3 sao		sao <= n - 1 + j 
  **	i = 5; 2 sao
   *	i = 6; 1 sao
*/
 int main(){
 	int n;
 	int i, j;
 	scanf("%d", &n);
 	
	 for (i = 0; i < (2*n - 1); i++){
	 	for (j = 0; j < n; j++)
	 		if (i >= (n - 1 - j) && i <= (n - 1 + j)) printf("*");
	 		else printf(" ");
		printf("\n");
	}
	 		
	return 0;
 }
