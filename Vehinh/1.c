#include <stdio.h>
#include <math.h>

int main(){
    int i ,j;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++){
            printf("*");    
        }
        printf("\n");    
    }    
    
    getch();
    return 0;
}
