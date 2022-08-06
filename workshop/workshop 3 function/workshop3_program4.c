#include <stdio.h>

double factorial(int n){
       double p=1;
       int i;
       for (i=2;i<=n;i++) p*=i;
       return p;
}
int main(){
    int n;
    do 
    {
       printf("Input n = ");
       scanf("%d",&n);
    } while (n<0);
    printf("The factorial = %.2lf", factorial(n));
getch();
return 0;   
}
