#include <stdio.h>
#include <math.h>


int main(){
    double a, sum = 0;
    int i;
    scanf("%lf", &a);
    for (i = 1; i <= a; i++){
        sum += ( 1.0 / i );
    }
    printf("%lf", sum);
    
    getch();
    return 0;
}
