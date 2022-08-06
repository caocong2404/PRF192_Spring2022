#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	int arr[7] = {1, 3, 5, 7, 4, 12, 12};
	int n = 7;
	int i, j, k;
	//nhap gia tri
	//for (i = 0; i < n; i++)
	//scanf("%d", &a[i]);
	
	for (i = 0; i < n - 1; i++){
		for (j = i + 1; j < n; j++){
			if (arr[i] == arr[j]){
				for(k = j; k < n; k++)
				arr[k] = arr[k + 1];
				n--;
				j--;
			}
		}
	}
	for (i = 0; i < n; i++)
	printf("%d", arr[i]);

	return 0;
}
