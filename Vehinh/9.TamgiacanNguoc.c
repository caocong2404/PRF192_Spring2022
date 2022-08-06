#include <stdio.h>

int main(){
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j < i; j++) 
            printf(" ");
            
        for (j = 1; j <= 2*(n - i + 1) - 1; j++)
            printf("*");
            
            printf("\n");
    }
    
    getch();
    return 0;
}
