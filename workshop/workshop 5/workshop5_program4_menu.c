#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>

void printMenu(){
     printf("Welcome to program 4\n");
     printf("1- Quadratic equation\n");
     printf("2- Bank deposit problem\n");
     printf("3- Quit\n");
}

void quadraticEquation(){ 
     float a, b, c, delta, x1, x2;
     printf("ax^x + bx + c = 0\n");
     printf("Input a, b & c = ");
     fflush(stdin);
     scanf("%f %f %f", &a, &b, &c);
     delta = pow(b, 2) - (4 * a * c);
     if(a == 0) printf("x = %.2f", (-c / b));
     if (a != 0)
     {
           if (delta > 0) {
           x1 = -b + sqrt(delta) / ( 2 * a);
           x2 = -b - sqrt(delta) / ( 2 * a); 
           printf("x1 = %.2f\nx2 = %.2f", x1, x2);
           }
               else if ( delta == 0 ){ 
                    x1 = -b / (2 * a);
                    x2 = -b / (2 * a);
                    printf("x1 = x2 = %.2f", x1);
               }
           else printf("Root are imaginary\n");
     }
}     
     
void bankDeposit(){
     double deposit, rate, n, P;
     do
     {
            do
            {
                     printf("Enter your deposit = ");
                     scanf("%lf", &deposit); 
                     if (deposit <= 0 ) {
                                 printf("*Deposit must be a positive number!!*\n");
                                 printf("Please, enter again.\n");
                     }
            }  while ( deposit <=0);
            
            do
            {
                     printf("Enter your yearly rate = ");
                     scanf("%lf", &rate); 
                     if (rate <= 0 || rate > 0.1 ) {
                              printf("*Yearly rate is positive number but less than or equal to 0.1!!*\n");
                              printf("Please, enter again.\n");
                     }
            }  while ( rate <= 0 || rate > 0.1);
            
            do
            {
                   printf("Enter number of year = ");
                   scanf("%lf", &n); 
                   if (n <= 0 ) { 
                         printf("*The number of years must be positive!!!!*\n");
                         printf("Please, enter again.\n");
                   }
            }  while ( n <= 0);
     } while ( deposit <= 0 ||  rate <= 0 || rate > 0.1 || n <= 0 );
     
     P = deposit * pow( (1 + rate), n);
     printf("The amount of you after duration is %.2lf\n", P);
     
} 
int main(){
    int choice;
    printMenu();
    do
    {
                printf("Choose [1..3]: ");
                scanf("%d", &choice);
                if ( choice < 1 || choice > 3) 
                {
                     printf("The option is not supported\n"); 
                     printf("Please choose number in range [1..3], please!!\n");
                     
                }
                switch (choice)
                {
                       case 1: 
                            quadraticEquation();     
                            break;     
                       case 2:
                            bankDeposit();
                            break;
                       case 3: 
                            printf("Thank you for watching and Byebye!!!\n");
	                        break;      
                       default : {
                                 printf("Input 1, 2 or 3 only, please!\n");
                                 printf("===============================================\n\n");
                                 }
                }
    } while ( choice < 1 || choice > 3); 
    

    getch();
    return 0;
}
