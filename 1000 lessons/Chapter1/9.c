#include <stdio.h>

int main(){
    int a, multiply = 1;
    int i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++){
        multiply *= i;
    } 
    printf("%d", multiply);
    getch();
    return 0;
}
