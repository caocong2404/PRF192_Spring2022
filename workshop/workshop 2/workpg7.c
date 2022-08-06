#include <stdio.h>
main(){
char c1,c2,t,c;
int d;
     printf("Input c1: ");
     scanf("%c",&c1);
     fflush(stdin);
     printf("Input c2: ");
     scanf("%c",&c2);
       if (c1 > c2){ 
          t  = c1; 
          c1 = c2; 
          c2 = t;
       }    
         d = c2 - c1;
         printf("Range = %d\n",d);
         printf("*------*------*\n");
         for (c=c1;c<=c2;c++)
            { printf("%c, %d, %o, %x\n", c, c, c, c);
         } 
getch();
return 0;
}    
