#include <stdio.h>
#include <math.h>

int main(){
    int prime, i;
    scanf("%d", &prime);
    for (i = 2; i <= prime; i++){
        if ( prime % i == 0) printf("This is not a prime number");
           else  printf("This is prime number");
           break;
    }

    getch();
    return 0;    
}
