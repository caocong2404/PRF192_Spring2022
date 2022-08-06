#include <stdio.h>
#include <stdlib.h>

double findFactorial(int n);
int main(int argc, char *argv[]) {
	//=== Do not add new or change statements in the main function.===	
	system("cls");
  	printf("\nTEST Q1 (2 marks):\n");
	int n;
	printf("Please enter a positive integer to find factorial: ");
	scanf("%d", &n);
	
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
  	printf("%.0lf", findFactorial(n)); 
  	printf("\n");
  	system ("pause");	
	return 0;
}
//-----------------------------------------------
double findFactorial(int n){
	//Begin your codes here=====================
	int i;
	double factorial = 1;
	for (i = 1; i <= n; i++){
		factorial *= i;	
	}
	return factorial;
	//End your codes============================
}

