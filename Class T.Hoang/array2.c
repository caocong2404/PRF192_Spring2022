#include <stdio.h>
#include <stdlib.h>

//luu 10 cot diem cua mon C
/*
IPO: 10 bien
I: 
*/
int main(){
    float c[10];
    int i;
    printf("Please itput 10 grades of the C class: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Input grades[%d]: ", (i + 1));
        scanf("%f", &c[i]);
    }
    printf("Here is your grades\n");
    for (int i = 0; i < 10; i++)
        printf("%.2f\t", c[i]);
        
    getch();
    return 0;    
}
