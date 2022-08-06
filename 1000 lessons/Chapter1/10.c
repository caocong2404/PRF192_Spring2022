#include <stdio.h>
#include <math.h>

int main(){
    int x, multiply = 1;
    int i;
    scanf("%d", &x);
    for (i = 1; i <= x; i++){
        multiply += pow(x , i);
    } 
    printf("%d", multiply);
    getch();
    return 0;
}
