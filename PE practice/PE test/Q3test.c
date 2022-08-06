#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int a[], int n);
int findSmallestNumber(int a[], int n);
int main(int argc, char *argv[]) {
	//=== Do not add new or change statements in the main function.===
	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
	int n, a[MAX];	
	char c;
	do {
		printf("How many elements do you want to enter into the integer array? [1..100] ");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');
	
	inputArray(a,n);
	printf("Smallest number in array:\n");
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
  	printf("%d", findSmallestNumber(a,n));
  	printf("\n");
  	system ("pause");	
	return 0;
}
//=== Do not add new or change statements in this function.===
void inputArray(int a[], int n) {	
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//----------------------------------------------
int findSmallestNumber(int a[], int n) {
	//Begin your codes here=====================
	int min = a[0];
	int i;
	for (i = 0; i < n; i++){
		if (a[i] < min) min = a[i];
	}
	return min;
	//End your codes============================
}

