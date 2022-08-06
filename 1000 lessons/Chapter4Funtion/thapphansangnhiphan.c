//prnt nhi pha

#include <stdio.h>
#include <math.h>

void print(int x){
     int r;
     if ( x == 0) return ;
        else {
             r = x % 2;
             print(x/2);
             printf("%d", r);
        }
             
}


int main (){
    int a;
    scanf("%d", &a);
    print(a);
    
    getch();
    return 0;
    
}
