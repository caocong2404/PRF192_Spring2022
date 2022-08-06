#include <stdio.h>

void inputArray(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         scanf("%d", &a[i]);    
     }
     
}

void swapValue(int *x, int *y){
     int temp;
     temp = *x;
     *x   = *y;
     *y   = temp; 
}

int main(){
    int a[1000];
    int n, q, e;
    //scanf("%d", &n);
    scanf("%d%d", &q, &e);
    printf("Before swap q = %d; e = %d\n", q, e); 
    swapValue( &q, &e);
    printf("After swap q = %d; e = %d", q, e); 
    
    getch();
    return 0;
}
