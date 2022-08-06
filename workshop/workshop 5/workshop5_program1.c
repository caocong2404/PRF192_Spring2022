#include <stdio.h>
//Program 1: You are required to develop a program 
//that will throw two dice until the top faces of the two dice total 
//to a specified number. 

int intRandom( int min, int max){
    return ( min + rand() % ( max - min + 1));
}

int main(){
    srand(time(NULL));
    int total, x, y, count;
    do
    {
        printf("Dice Thrower: ");
        scanf("%d", &total);
        printf("-----------------");
        printf("\nTotal sought : %d\n", total);
        if ( total < 2 || total > 12) printf("In range [2..12], please!!\n\n"); 
    } while ( total < 2 || total > 12 );
    count = 1;
    do
    {
          x = intRandom(1, 6);
          y = intRandom(1, 6);
          printf("Result of throw #%d: \t%d + %d\n", count, x, y);
          count++;
    } while ( x + y != total );
    printf("**Bingo!! You got your total in %d throws**", (count - 1));
    
    getch();
    return 0;
}
