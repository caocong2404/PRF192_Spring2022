#include <stdio.h>
#include <math.h>

void inputArray(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d: ", (i + 1));
         scanf("%d", &a[i]);
     }
}

int searchMax(int *a, int n){
    int i;
    int max = a[0];
    for (i = 1; i < n; i++){
        if (max < a[i]) max = a[i];
    }
    return max;
}

int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputArray(a, n);
    printf("The max value is %d", searchMax(a, n));
    
    getch();
    return 0;
}
