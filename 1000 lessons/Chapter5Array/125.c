#include <stdio.h>
#include <math.h>

void inputValue(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d: ", (i + 1)); 
         scanf("%d", &a[i]);
     }
}


int checkPrime(int n){
    int i;
    for (i = 0; i < n; i++){
        if (a[i] %          
    }
    
        
}



int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputValue(a, n);
    int check = checkPrime(a, n);
    printf("have %d prime < 100", check);
    
    
    getch();
    return 0;
}
