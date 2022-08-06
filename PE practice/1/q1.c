#include <stdio.h>

int main(){
    float a,b;
    scanf("%f%f", &a, &b);
    if (a > b) printf("float a > b");
       else if (b >= a) printf("float a <= b");
          else printf("");
    
       
    getch();
    return 0;
}
