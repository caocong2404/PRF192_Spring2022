#include <stdio.h>
#include <math.h>

void inputValue(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d: ", (i + 1)); 
         scanf("%d", &a[i]);
     }
}

void swap(int *x, int *y){
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
}

int descArray(int *a, int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++){
            if (a[i] > a[j]) 
            swap(&a[i], &a[j]);    
        }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
}
    

    


int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputValue(a, n);
    descArray(a, n);
    
    
    getch();
    return 0;
}
