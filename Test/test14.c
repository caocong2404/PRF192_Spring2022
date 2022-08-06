#include<stdio.h>

int main() {
    int n;
    int a, max;
    scanf("%d",n);
    for (int i = 0; i < n; i++) scanf("%d",&a[i]); 
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++ ) {
        if (a[i]> a[j]) max = a[i];
            else max = a[j];
        }
    }
    printf("%d", max);
    return 0;
}
