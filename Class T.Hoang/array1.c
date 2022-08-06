#include <stdio.h>
#include <stdlib.h>

//luu 10 cot diem cua mon C
/*
IPO: 10 bien
I: 
*/
int main(){
    float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
    float c[10];
    
    c1 = 10.0;
    c[0] = 10.0;
    
    printf("Bien le: %.2f %.2f %.2f \n", c1, c2, c3);
    printf("Bien mang: %.2f %.2f %.2f \n", c[0], c[1], c[2]);
    
    //
    printf ("Input 2 grades: ");
    scanf("%f", &c2);
    scanf("%f", &c[1]);
    
    printf("After inputing two grades, the current grades are:\n");
    
    printf("Bien le: %.2f %.2f %.2f \n", c1, c2, c3);
    printf("Bien mang: %.2f %.2f %.2f", c[0], c[1], c[2]);
    
getch();
return 0;
}
