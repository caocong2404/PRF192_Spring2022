#include <stdio.h>
#include <math.h>

int main(){
    int a[10];
    int n, i, sum = 0;
    do 
    {
        scanf("%d", &n);
        if ( n > 10) { printf("The maximum of array is 10\n");
                       printf("Type again!!\n");
        }
    } while ( n > 10);
    
    for ( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for ( i = 0; i < n; i++){
        if (a[i] % 2 == 0){
                 sum += pow(a[i], 2);
        }
    }
    
    printf("%d", sum);
    getch();
    return 0;
}
