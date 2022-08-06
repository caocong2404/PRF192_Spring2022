#include <stdio.h>
#include <math.h>

int main(){
    int i ,j, k;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if ( j <= n - i) printf("  ");
        }
        for (j = 1; j <= 2*i - 1; j++){
            if ( i == 1|| i == n || j == 1 || j == (2*i - 1))
            printf("* ");
            else printf("  ");
            
        }
        printf("\n");    
    }    
    
    getch();
    return 0;
}
