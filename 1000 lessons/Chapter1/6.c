#include <stdio.h>

int main(){
    double a, sum = 0;
    int i;
    scanf("%lf", &a);
    for (i = 1; i <= a; i++){
        sum += 1.0 / (i * (i + 1)) ;
    } 
    printf("%lf", sum);
    getch();
    return 0;
}
