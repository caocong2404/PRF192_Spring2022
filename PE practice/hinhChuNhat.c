#include <stdio.h>

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int i, j;
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			if ( i == 1 || i == m || j == 1 || j == n) printf("*");
			else printf(" ");
		}
	printf("\n");
	}
	
	
	return 0;
}
