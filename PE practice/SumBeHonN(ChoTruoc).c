#include <stdio.h>

int main(){
	int n;
	int sum = 0, result;
	scanf("%d", &n);
	int i = 0;
	while (sum < n){
		sum += i;
		if (sum > n) {
			printf("%d", i - 1);
			break;
		}
		i++;
	}
	return 0;
}
