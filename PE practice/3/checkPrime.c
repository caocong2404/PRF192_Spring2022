////nhap vao mot so tu nhien n, in ra 4 so nguyen to gan nhat lon hon n 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <ctype.h>
//#include <stdbool.h>
//int checkPrime(int a){
//	int i;
//	if (a < 2 ) return 0;
//	for (i = 2; i < a; i++){
//		if (a % i == 0) return 0;
//	}
//	return i;
//}
// int main (){
// 	int n;
// 	int count = 0, i;
// 	int a[100];
// 	scanf("%d", &n);
// 	
//	for (i = 0; i < n; i++)
//	scanf("%d", &a[i]);
//	
//	for (i = 0; i < n; i++){
//	int we = checkPrime(a[i]);
//		if ( we != 0) {
//		printf("%d", a[i]); 
//		count++;
//		}
//		if (count == 4) break;
//		
// 	}
// 	return 0;
//}


//==============================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
 
bool isPrime(int n)	// ham kiem tra so nguyen to
{
	if( n < 2)
		return false;
	int i;
	for(i = 2; i <= sqrt(n);i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}
 
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int count = 4;
  	int n;
  	scanf("%d", &n);
  	int i = 1;
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	while(count > 0)	// in ra 4 so nguyen to lon hon n
	{
		if(isPrime(n + i))
		{
			printf("%d\n", n + i);
			count--;
		}
		i++;
	}
 
 
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  system ("pause");
  return(0);
}

