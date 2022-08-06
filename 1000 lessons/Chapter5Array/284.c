#include <stdio.h>
#include <math.h>

int main(){
    int a[5]={1, 2, 3, 4, 5};
    int i;
    int j, temp;
    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 5; j++){
            if (a[i] % 2 == 0 && a[j] % 2 == 0)
            {
             temp = a[i];
             a[i] = a[j];
             a[j] = temp;
            }         
    }
    
    for (i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    
    getch();
    return 0;
}
