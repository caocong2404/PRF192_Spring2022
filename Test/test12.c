#include <stdio.h>

int main(){
    double a[3];
    int i = 0;
    for ( i; i < 3; i++){
        printf("values in #%d: in p = %p and in u = %u\n", (i + 1), &a[i], &a[i]);
    
    }
    getch();
    return 0;
}
