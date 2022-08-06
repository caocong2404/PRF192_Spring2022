#include <stdio.h>
#include <math.h>

int mia(int x){
    int m;
    m = sqrt(x);
    if (pow(m,2)==x)
       return 1;
    else
        return 0;
}

int main(){
    int n,i;
    do 
    {
        printf("input n= ");
        scanf("%d",&n);
    } while (n<1);
    for (i=2;i<=n;i++)
    {
        if ( mia(i) )
        printf("%d ",i);
    }
    getchar();
    return 0;
}
