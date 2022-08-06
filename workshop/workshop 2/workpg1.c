#include <stdio.h>

int main()
{
    double a,b;
    char c;
    printf("Calculator\n");
    scanf("%lf %c %lf",&a,&c,&b);
    switch(c)
    {           
                case '+': 
                     printf("Result = %.2lf",a+b);
                     break;
                case '-': 
                      printf("Result = %.2lf",a-b);
                     break;
                case '*': 
                     printf("Result = %.2lf",a*b);
                     break;
                case '/': if (b==0){
                     printf ("Divide by 0");}
                           else 
                                {printf("Result = %.2lf",a/b);
                           }
                     break;
                default :printf ("Op is not supported");
    }
    getch();
    return 0;
}
                                
                     
    
