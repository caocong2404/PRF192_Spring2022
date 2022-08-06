#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

long long maxNumber = 1000000000;

unsigned long long inputISBN(){
         long digit;
	     do 
         {  
            printf("Type in the ISBN to check (0 to quit): ");
	        scanf("%ld", &digit);
            if (digit > maxNumber ) printf("The number must be less than or equal to 1 000 000 000!\n");
         } while (digit > maxNumber);
	     return digit;
}

void computeISBN(unsigned long long digit){
     int a[10], c[10];
     int num[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
     int i, sum = 0;
     
        for(i = 9; i >= 0; i--){
              a[i] = digit % 10;
              digit /= 10;
        }
        
        for (i = 9; i >= 0; i--)
            c[i] = a[i] * num[i];
    
        for (i = 0; i < 10; i++)
            sum += c[i];
                if( sum % 11 == 0)  
                    printf("This is a valid ISBN\n"); 	
                    else printf("This is an invalid ISBN\n");        
    } 
   
    
int main(){
    unsigned long long digit;
    printf("\nISBN Validator\n"); 
    printf("==============\n");
	do
    {    
         digit = inputISBN();
         if (digit == 0) printf("Goodbye!! See you next time <3");
            else computeISBN(digit);
    } while( digit != 0);
    
    getch();
    return 0;
}
