#include <stdio.h>

int main(){
    int a, b, k = 0, h = 5, l = 4;
    int i, j;
    //scanf("%d", &h);
    
    for (i = 1; i <= h; i++){
        for (j = 1; j <= h; j++){
            if (i > j) printf(" ");
            else printf("*");
        }
        printf("\n");    
    }
    

   
    
    getch();
    return 0;
}
