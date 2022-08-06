#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>

void printMenu(){
     printf("Welcome to program 3\n");
     printf("========================\n");
     printf("1- Processing date data\n");
     printf("2- Character data\n");
     printf("3- Quit\n");
}

int validDate(int d, int m, int y){
    int maxd = 31;
    if ( d < 1 || d > 31 || m < 1 || m > 12 ) return 0;
    if ( m == 4 || m == 6 || m == 9 || m == 11 ) maxd = 30;
       else if( m == 2 ){
                     if( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0)) maxd = 29;
                     else maxd = 28;
       }    
    return d <= maxd; 
}

void descendChar (){
     int i,u;
     char char1, char2;
                 printf("Input 2 character in ASCII: ");
                 fflush(stdin);
                 scanf("%c%c",&char1, &char2);
     if ( char1 > char2)
     {
          u = char1 - char2;
          printf("Have #%d ASCII codes of characters between \'%c%c\'\n", (u - 1), char1, char2);
          for ( i = char1; i >= char2; i--) printf("%c: \t%d, \t%Xh\n", i, i ,i);
     }
              else 
              {
                   u = char2 - char1;
                   printf("Have #%d ASCII codes of characters between %c%c\n", (u - 1), char1, char2);
                   for ( i = char2; i >= char1; i--) printf("%c: \t%d, \t%Xh\n", i, i ,i);
              }
}

int main(){
    int choice;
    int d, m, y;
    printMenu();
    do
    {
                printf("Choose [1..3]: ");
                scanf("%d", &choice);
                if ( choice < 1 || choice > 3) 
                {
                     printf("The option is not supported\n"); 
                     printf("Please choose number in range [1..3], please!!\n");
                     printf("===============================================\n\n");
                }
                switch (choice)
                {
                       case 1: 
                       printf("Input the day/month/year (Use \"/\"): ");
                       scanf("%d/%d/%d", &d, &m, &y);
                       if (validDate(d, m, y)) printf("Valid date\n");
                          else printf ("Invalid day\n");
                          printf("----------------------------\n");
                       break;     
                       
                       case 2:
                            descendChar();
                            break;
                       
                       case 3: 
                            printf("Thank you for and Byebye!!!\n");
                            break;             
                }
    } while ( choice < 1 || choice > 3); 
    getch();
    return 0;
}
