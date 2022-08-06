#include <stdio.h>
#include <math.h>

int checkPrime(int prime){
    int i;
        if (prime <= 1) return 0;
        if (prime == 2) return 1;
           for (i = 2; i < sqrt(prime); i++){
              if ( prime % i == 0) return 0;
           }
              return 1;
}   

int main(){
    int prime;
    scanf("%d", &prime);
    int check = checkPrime(prime);
    if (check == 0) printf("This is not prime number");
       else printf("This is a prime number");
       
    getch();
    return 0;
}
