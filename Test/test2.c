#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int i = 1;
    if (i % 2 == 1)
    printf("%d ", i + 1);
    printf("%d ", i + 2);
    printf("%d ", i + 1);
    printf("%d ", i + 3) ;
    printf("%d ", i++);
    printf("%d ", i++);
    printf("%d ", i + 3) ;
    
    getch();
    return 0;
}
