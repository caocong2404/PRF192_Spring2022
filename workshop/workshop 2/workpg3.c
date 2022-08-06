#include <stdio.h>
int main(){
    int x;
    int S=0;
    
    do {
        printf("Input x: ");
        scanf("%d",&x);
        S=S+x;
    }
            while (x!=0) ;  
               printf("S = %d",S);
    getch();
    return 0;
}
