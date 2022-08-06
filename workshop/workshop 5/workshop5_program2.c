#include <stdio.h>
/*Program 2: A basket contains ten balls. 
Balls are numbered from 1 to 10.
User gets a pair of balls and he/she hopes that sum of numbers is equal to a known expected total.
This problem is the same with the previous problem but the total is between 2 to 20. */

int intRandom( int min, int max){
    return ( min + rand() % ( max - min + 1));
}

int main(){
    srand(time(NULL));
    int total, x, y, count;
    do
    {
        printf(" Ball Lottery: ");
        scanf("%d", &total);
        printf("-----------------");
        printf("\nTotal sought : %d\n", total);
        if ( total < 2 || total > 20) printf("In range [2..20], please!!\n\n"); 
    } while ( total < 2 || total > 20 );
    count = 1;
    do
    {
          x = intRandom(1, 10);
          y = intRandom(1, 10);
          printf("Result of picks #%d and #%d: \t%d + %d\n", count, (count + 1), x, y);
          count++;
    } while ( x + y != total );
    printf("**Bingo!! You got your total in #%d picks!**", (count));
    
    getch();
    return 0;
}
