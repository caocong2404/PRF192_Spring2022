#include <stdio.h>

int main(){
    float a[1000], temp;
    int i, j;
    for (i = 0; i < 5; i++)
    { 
        printf("#%d: ", i + 1);
        scanf("%f", &a[i]);
    }
    
    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                     temp = a[i];  
                     a[i] = a[j];
                     a[j] = temp;
                  
            } printf("%f ",a[i]);
        }
        
        
    getch();
    return 0;
}
