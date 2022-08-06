#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int num(int a, int b){
    int sum;
    sum = a +b;
    sum = sum/10;
    return sum;
}
int main(){

int a,b,c;
a=10;
b=12;
c=num(a,b);
printf("%d",c);

getch();
return 0;
}
