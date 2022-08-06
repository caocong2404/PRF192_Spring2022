#include <stdio.h>

double fibo(int n){
       int t1 = 1, t2 = 1,f = 1, i;
       for (i=3; i<=n; i++){
           f  = t1 + t2;
           t1 = t2;
           t2 = f;
       } 
       return f;
}

int validDate( int d, int m, int y){
    int maxd = 31; //month: 1,3,5,6,7,8,10,12
    if ( d < 1 || d > 31 || m < 1 || m > 12) return 0;
    if ( m == 4 || m == 6 || m == 9 || m == 11) maxd = 30;
       else if( m == 2 ){
                     if( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0)) maxd = 29;
                     else maxd = 28;
       }    
    return d <= maxd;
}
int main(){
   int n, choice;
   int d, m, y;
   do
   {
          printf( "1- Fibonacci sequence\n");
          printf( "2- Check a date \n");
          printf( "3- Quit\n");
          printf( "Select an operation: ");
          scanf("%d", &choice);
       switch ( choice ){
          case 1: do
                  {
                          printf("Input n: ");
                          scanf("%d", &n);
                  } while ( n < 1 );
                  printf("%d", fibo(n));
                     printf("\n----------------------------\n");
                  break;
          
          case 2: 
               
               printf("Input the day/month/year (Use \"/\"): ");
               scanf("%d/%d/%d", &d, &m, &y);
               if (validDate(d,m,y)) printf("Valid date\n");
                  else printf ("Invalid day\n");
                  printf("\n----------------------------\n");
                  break;
       }
   } while ( choice > 0 & choice < 3);
   
fflush(stdin);
getchar();
return 0;
}
