#include <stdio.h>
#include <math.h>

void inputValue(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d: ", (i + 1)); 
         scanf("%d", &a[i]);
     }
}

int checkEven(int *a, int n){
    int i;
    int sum = 0;
    for (i = 0; i < n; i++){
        if ( a[i] < 0 ) sum += a[i];     
    }
    return sum;
}



int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputValue(a, n);
    int check = checkEven(a, n);
    printf("sum of positie number = %d", check);
    
    
    getch();
    return 0;
}
