#include <stdio.h>
#include <math.h>

void quadratic(int x, int y, int z){
    double x1, x2;
    int delta = y*y - 4*x*z;
    if (delta < 0) printf("Equation no solution");
       else if (delta = 0) x1 = x2 = -y / (2 * x);
            else 
            {
                 printf("Phuong trinh co 2 nghiem: ");
                 x1 = (-y + sqrt(delta)) / 2*x;
                 x2 = (-y - sqrt(delta)) /2*x;
            }
       printf("x1 = %lf", x1);
       printf("x2 = %lf", x2);
}
            
int main(){
    int choice;
    int a,b,c;
    do
    {    
    printf("1- Quadratic equation\n");
    printf("2- Bank deposit problem\n");
    printf("3- Quit\n");
    printf("Choice 1 --> 3 : ");
    switch (choice){
           case 1:   
                printf("ax + by + c = 0");
                printf("Input a: ");
                scanf("%d",&a);
                printf("Input b: ");
                scanf("%d",&b);
                printf("Input c: ");
                scanf("%d",&c);
                quadratic(a, b, c);
                break;
                }
    } while ( choice > 0 & choice < 3);
           
getch();
return 0;
}
