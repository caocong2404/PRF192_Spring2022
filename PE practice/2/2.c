#include <stdio.h>
#include <math.h>

int check (int n)
{
    if ( n % 400 == 0) return 1;
       if (n % 4 == 0 && n % 100 != 00) return 1;
          return 0;
} 
          
int main(){
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int a[4];
    int i;
    for (i = 0; i < 4; i++){
         scanf("%d",&a[i]);
    }
    fflush(stdin);
    printf("OUTPUT\n");
     //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 0; i < 4; i++)
    {
        if ( check(a[i]) == 1) printf("%d ", a[i]);
    }
    getch();
    
    return 0;
}
