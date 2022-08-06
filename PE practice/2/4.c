#include <stdio.h>

int main(){
    int i, j, n;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++)
        if (j <= n - i) printf(" ");
        
        for (j = 1; j <= 2*i - 1; j++)
        if ( j == 1 || i == n || j == (2*i - 1))
        printf("*");
        else printf (" ");        
        printf("\n");
    }
    getch();
    return 0;
}
