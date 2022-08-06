#include <stdio.h>
#include <math.h>

void inputArray(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d: ", (i + 1));
         scanf("%d", &a[i]);
     }
}

int searchPos(int *a, int n){
    int i;
    int pos;
    for (i = n - 1; i >= 0; i--){
        if (a[i] > 0) return a[i];  
    }
    
    return -1;
    
}

int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputArray(a, n);
    int result = searchPos(a, n);
    if (result == -1) printf("The array doesnot have pos value");
       else printf("The positive value is %d", result);
    
    getch();
    return 0;
}
