#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n, i, sum;
  printf("Enter n = "); scanf("%d",&n);  
  //============================================================
  
  // Write your statements here  
 	sum = 0;
	 for (i = 1; i <= n/2; i++){
	 	if (n % i == 0)
 		sum += i;
	 }
 
  //End your codes
  
  
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",sum); 
  printf("\n");
  system ("pause");
  return(0);
}
