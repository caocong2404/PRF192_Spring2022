#include <stdio.h>
#include <math.h>
/*Tìm s? nguyên t? d?u tiên trong m?ng 1 chi?u các s? nguyên. N?u tìm
th?y in ra v? trí c?a s? nguyên dó, ngu?c l?i m?ng không có s? nguyên t? thì
(*/

int checkPrime(int n){
	int i;
	for (i = 2; i <= sqrt(n); ++i)
			if (n % i == 0) return 0;
	return n > 1;
}

int main(){
	int a[100];
	int n, i;
	scanf("%d",&n);
	//nhap mang?
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++){
		//checkPrime dung thi lam` (n > 1)
		if (checkPrime(a[i])) {
		printf("%d", i); break;
		}
	}
	if (i == n){
		printf("-1");
	}
	
	
	return 0;
}
