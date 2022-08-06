#include <stdio.h>

// S(n) = 1 + 2 + 3 + … + n
int main(){
    int a, i, sum = 0;
        
    scanf("%d", &a);
    for (i = 0; i <= a; i++){
        sum += i;
    }
    printf("%d", sum);
    getch();
    return 0;
    
}
