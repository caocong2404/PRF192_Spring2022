#include <stdio.h>

int main(){
    int n;
    int product = 1;
    int i;

    scanf("d", &n);

    for (i = 2; i <= (n/2); i++)
    {
        if (i%2 == 0) product *= i;
    }
    printf("%d", product);
    
    getch();
    return 0;
}


