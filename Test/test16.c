#include <stdio.h>

int main(){
    double a, b, c;
    int check, sum = 0;
    
    do 
    {
               printf("Input your deposit , monthly rate and the number of months : ");
               fflush(stdin);
               check = scanf("%lf%lf%lf", &a, &b, &c);
               printf("%lf %lf %lf\n", a, b, c);
               if (check != 3) printf("Retype 3 value please!\n");
               
               else {
		            if (a <= 0 ) printf("Deposit must be positive!\n");
		            if (b <= 0 ) printf("The number of months must be positive!\n");
		            if (c <= 0 || c > 0.1) printf("Monthly rate must be positive but less than or equal to 0.1!\n");
 	            }
    }
    while ( a <= 0  || b <= 0  || c <= 0 || c > 0.1 || check != 3 );
    
    
    getch();
    return 0;
}
