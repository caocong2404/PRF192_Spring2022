#include <stdio.h>

int main(){
	int a[100] ;
	int n, i, j, temp;
	scanf("%d", &n);
	for (i = 0; i < n ; i++)
		scanf("%d", &a[i]);
		
	for(i = 0; i < n - 1; i++){
		for (j = i + 1; j < n; j++)
			if(a[i] == a[j]){
				temp = a[j];
				
			}
			
		
	}
	
	return 0;
}