#include <stdio.h>

int main(){
    double a, sum = 0;
    double i;
    scanf("%lf", &a);
    for (i = 1; i <= a; i++){
        sum += i / (i + 1);
    } 
    printf("%lf", sum);
    getch();
    return 0;
}
