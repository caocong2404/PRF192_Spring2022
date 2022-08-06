#include <stdio.h>
main (){
     int x,y,t;
     do { 
          printf("\nInput x = ");
          scanf("%d",&x);
          printf("Input y = ");
          scanf("%d",&y);
          t=x;
          x=y;
          y=t;
              printf("\nSwap values");
              printf("\nx= %d",x); 
              printf("\ny= %d\n",y);
     }
              while (x!=0 && y!=0);{
                    printf("\nFinal result");
                    printf("\nx= %d",x); 
                    printf("\ny= %d",y);
              }                         
     getch();
     return 0;        
}           
          
     
