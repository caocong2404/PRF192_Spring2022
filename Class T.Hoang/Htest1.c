#include <stdio.h>

void fV1();
main(){
       for (int i=1; i <= 10; i++)
       fV1();

}
void fV1()
{
     int x, y;
     printf("Please input an integer t get a ^2\n");
     printf("Input x = ");
     scanf("%d", &x);
     y = x * x;
     printf("The function y = f(x) = x^2; f(%d) = %d\n\n", x, y);
}
