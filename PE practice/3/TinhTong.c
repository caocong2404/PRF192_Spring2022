//Tinh tong sum = 1/x + 1/x^2 + 1/x^3 +... + 1/x^n 
//Voi x va n la so nguyen nhap tu ban phim

#include <stdio.h>
#include <math.h>

int main(){
	int x, n;
	double sum = 0;
	int i;
	scanf("%d%d", &x, &n);
	double x1 = 1.0 * x;
	for (i = 0; i < n; i++){
		sum += 1/pow(x1, i);
	}
	printf("%.2lf", sum);
	return 0;
	
}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <ctype.h>
// 
// 
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//  	int x,n;
//  	scanf("%d%d", &x, &n); //Nhap vao hai so nguyen x va n
//  	double sum = 0; //Khoi tao gia tri cua tong bang khong
//  	int i;
//  	for(i = 0;i <= n;i++)
//  	{
//  		sum+= 1 / (pow(x,i));	//pow(x,i) la ham tinh luy thua bac i cua x 
//	}
//  
// 
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//  	printf("%.2lf\n", sum);
// 
//  
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}

