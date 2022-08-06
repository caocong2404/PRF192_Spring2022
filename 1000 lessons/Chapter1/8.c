#include <stdio.h>

int main(){
    double a, sum = 0;
    double i;
    scanf("%lf", &a);
    for (i = 0; i <= a; i++){
        sum += (2*i + 1) / (2*i + 2);
    } 
    printf("%lf", sum);
    getch();
    return 0;
}
