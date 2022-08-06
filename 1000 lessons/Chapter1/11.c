#include <stdio.h>
#include <math.h>

int main(){
    int x, multiply = 1, sum = 0;
    int i;
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        multiply *= i;
        sum += multiply;
    } 
    printf("%d", sum);
    getch();
    return 0;
}
