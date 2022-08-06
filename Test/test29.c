#include <stdio.h>
#include <string.h>
int y = 30;
void foo(int *x){
	x = &y;
	*x = 12;
}

int main(){
	int v = 10;
	foo(&v);
	printf("%d", v);
	return 0;
}


/****/
