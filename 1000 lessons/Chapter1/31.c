#include <stdio.h>
#include <math.h>

int checkPrime( int n){
    int i;
    for ( i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
        return 1;
    }
}

void lietKe(int n){
     int i;
     for ( i = 2; i <= n; i++){
         if ( checkPrime(i) == 1)
         printf("%d ", i);
     }
} 
int main(){
    int n;
    scanf("%d", &n);
    checkPrime(n);
    lietKe(n);
    
    
    
    getch();
    return 0;
}
