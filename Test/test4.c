#include <stdio.h>
#include <conio.h>


void T(int *p, int*q)
{
    int t=*p;
        *p=*q;
        *q=t;
}
main(){       
int a=7,b=6;
T(&a,&b);
printf("a = %d\nb = %d",a,b);
getch();
return 0;
}
