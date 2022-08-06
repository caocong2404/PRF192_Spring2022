#include <stdio.h>
#include <math.h>

int main(){
    int i ,j;
    int n;
    scanf("%d", &n);
    for (i = n; i >= 1; i--){
        for (j = 1; j <= i; j++){
            printf("*");
        }  
        printf("\n");    
    }    
    
    getch();
    return 0;
}
