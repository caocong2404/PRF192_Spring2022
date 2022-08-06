#include <stdio.h>
#include <math.h>
int checkPrime(int a){
	int i;
	if (a == 2 ) return i;
	if (a < 2) return 0; 
	if (a > 2){
		for (i = 2; i < a; i++){
			if (a % i == 0) return 0; 
		}
	}
	return i;
}
int main(){
	int a[5]={1, 4, 2, 6, 7};
	//scanf("%d",&n);
	int i;
	for (i = 0; i < 5; i++){
		if (checkPrime(a[i]) != 0) {
		printf("%d", i); break;
		}
	}
	
	
	return 0;
}
