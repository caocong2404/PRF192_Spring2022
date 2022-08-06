#include <stdio.h>
int main(){
    const long pa = 9000000, pd = 3600000;
    int n;
    long int tf, ti, income, incometax;
    printf("The Personal pending amount: %ld$/month/dependent",pa);  
    printf("\nThe Alimony: %ld$/month/dependent\n",pd);
    printf("\nInput your income: ");
    scanf("%ld",&income);
    printf("Input dependents: ");
    scanf("%ld",&n);
                   tf = 12*(pa + n*pd);
                   printf("Tax-free income: %ld\n",tf);
    ti = income - tf;
    printf("Taxable income: %ld",ti);
    if (ti <=0) { incometax = ti *0; 
    }
           else if   (ti<=5000000) { incometax = ti *5/100 ;
           }
                else if (ti <= 10000000) { incometax = (ti-5000000)*10/100 + 5000000*5/100 ;
                }
                     else if (ti<=18000000) { incometax = (ti - 10000000)*15/100+ 5000000*10/100 + 5000000*5/100 ;
                     }
                          else { incometax = 5000000*0.05+5000000*0.1+8000000*0.15+(ti-18000000)*0.2;                        
                          }                        
    printf("\nIncome tax: %ld",incometax);                      
    getch();
    return 0;
}
    
    
