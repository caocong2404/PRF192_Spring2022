#include <stdio.h>
int main(){
    int x;
    int S=0;
    printf("* 0 to sum all values *\n\n");
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
