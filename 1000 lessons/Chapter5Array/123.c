#include <stdio.h>
#include <math.h>

void inputValue(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         scanf("%d", &a[i]);
     }
}

int searchMin(int *a, int n){
    int i;
    int minPos = 0;
    for (i = 0; i < n; i++){
        if (a[minPos] > a[i]) minPos = i;     
    }
    return minPos;
}

int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputValue(a, n);
    searchMin(a ,n);
    printf("The min value is at %d", searchMin(a, n));
    
    getch();
    return 0;
}
