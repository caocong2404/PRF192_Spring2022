#include <stdio.h>
#include <math.h>

void printMenu(){
           printf("\n-------------------------------------------------\n");
           printf("Welcome to Math Hepler program\n");
           printf("Choose the following functions to play with:\n");
           printf("1. Compute the disk area\n");
           printf("2. Compute the rectangle area\n");
           printf("3. Compute the triangle are\n");
           printf("4. Compute the ... area\n");
           printf("5. Quit\n");

}
int main(){
     int choice;
     float area, radius;
     do
     {      
           printMenu();
           printf("Choose 1..5: ");
           scanf("%d",&choice);
           
           
           switch (choice)
           {
                  case 1:
                       printf("You choose compute the disk area\n");
                       printf("Please input a radius (> 0): ");
                       scanf("%f",&radius);
                       area = 3.14 * radius * radius;
                       printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
                       break;
                  case 2:
                       printf("You choose to compute the retangle area\n");
                       break;
                  case 3:
                       printf("You choose to compute the triangle are\n");
                       break;
                  case 4:
                       printf("You choose to compute the ... area\n");
                       break;
                  case 5:
                       printf("Bye bye! See you next time!!\n");
                       break;
           }

     } while (choice != 5);

           
           getch();
           return 0;
}
