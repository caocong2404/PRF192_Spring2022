#include <stdio.h>
#include <math.h>

int main(){
    long x, multiply = 1, sum = 0;
    int i;
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        sum += pow(x, (i*2));
    } 
    printf("%d", sum);
    getch();
    return 0;
}
