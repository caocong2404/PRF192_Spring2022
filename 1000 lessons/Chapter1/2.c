#include <stdio.h>

int main(){
    int a, i, sum = 0;
    scanf("%d", &a);
    for (i = 0; i <= a; i++){
        sum += i*i;
    }
    printf("%d", sum);
    getch();
    return 0;
}
