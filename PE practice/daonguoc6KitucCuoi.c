#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int i, j, n, t;
	int array[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++ )
		scanf("%d", &array[i]);
		
	
	for (i = n - 6; i < n-1; i++) {
		for (j = i + 1; j < n; j++){
			t = array[i];
			array[i] = array[j];
			array[j] = t;
		}
	}
	for (i = 0; i < n; i++ )
		printf("%d ", array[i]);
	return 0;
}
