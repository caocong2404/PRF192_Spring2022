#include <stdio.h>
#include <conio.h>

int t(int x,int y, int z)
{
    int k=2*x + 3*y + 5*z;
    return k%13;
}
main(){              
int a=7, b=6, c=5;
double L=t(b,a,c);
printf("%d\n",L);
printf("%lf",L);
getch();
return 0;
}
