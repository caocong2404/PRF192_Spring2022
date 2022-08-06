#include <stdio.h>

int main(){
    int h, c;
    float S;
    scanf("%d %d", &c, &h);
    S =(double)h * c/2;
    printf("Dien tich = %.2f", S);
    
    getch();
    return 0;
}
