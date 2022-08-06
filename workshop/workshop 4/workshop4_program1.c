#include <stdio.h>
#include <math.h>

int prime( int n){
    int m = sqrt(n);
    int i;
    if ( n < 2 ) return 0;
    for (i=2; i<=m; i++)
        if ( n % i == 0) return 0;
    return 1;   
}

void printfMinMaxDigits (int n){
     int digit;
     int min, max, remainder;
     digit = n % 10;
     n = n / 10;
     min = max = digit;
     while ( n>0 )
     {     
           remainder = digit;
           remainder = n%10;
           n = n/10;
           if ( min > remainder) min = remainder;
              if ( max < remainder) max = remainder;
     }
     printf("The maximum digit is: %d\n", max);
     printf("The minimum digit is: %d\n", min);
     
}
    
   
int main(){
   int n, choice;
   do
   {
          printf( "1- Process primes\n");
          printf( "2- Print min, max digit in an integer \n");
          printf( "3- Quit\n");
          printf( "Select an operation: ");
          scanf("%d", &choice);
       switch ( choice ){
          case 1: do
                  {
                          printf("Input n: ");
                          scanf("%d", &n);
                  } while ( n<0 );
                  if ( prime(n) == 1 ) printf ("It is a prime\n");
                     else printf("It is not a prime\n");
                     printf("---------------------------------------\n");
                  break;
          
          case 2: do
                  {
                        printf("Input n: ");
                        scanf("%d", &n);
                  } while ( n < 0 );
                  printfMinMaxDigits( n);
                  printf("---------------------------------------\n");
                  break;
       }
   } while ( choice > 0 & choice < 3);
   

fflush(stdin);
getchar();
return 0;
}
