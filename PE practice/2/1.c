#include <stdio.h>
#include <math.h>

int main(){
    int h, b;
    scanf("%d %d", &h, &b);
    fflush(stdin);
    printf("OUTPUT\n");
    printf("%.2f", (double)(h * b / 2));
    
    getch();
    
    return 0;
}
