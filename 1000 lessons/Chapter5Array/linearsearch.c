#include <stdio.h>
#include <math.h>

void inputArray(int *a, int n ){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d = ", (i + 1));
         scanf("%d", &a[i]);
     }
}

int searchArray(int *a, int n){
    int x, i;
    printf("Your value want to find: ");
    scanf("%d", &x);
    for ( i = 0; i < n; i++){
        if ( a[i] == x) return i;
    }
        return 0; 
}


int main(){
    int a[1000];
    int n;
    printf("Array = ");
    scanf("%d", &n);
    inputArray(a, n);
    int findX = searchArray(a ,n);
    if (findX == 0) printf("Cannot found value in array");
       else printf("Find value in location #%d", (findX + 1));
    
    getch();
    return 0;
}
