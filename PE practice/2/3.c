#include <stdio.h>

int main(){
    int i, j, n, t;
    int a[1000];
    
    scanf("%d", &n);
    printf("Before sort: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++)
        if (a[i] > a[j]) 
        {
                 t = a[i];
                 a[i] = a[j];
                 a[j] = t;
        }
               
    }
    printf("\nAfter sort: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    getch();
    return 0;
}
