#include <stdio.h>
#include <stdlib.h>

//viet ham tinh n!
//IPO
//I: n
//P: 1.2.3.4...n -> Nhoi kieu nhan
//O: Tong ket qua nhan don
int main(int argc, char *argv[]){
    
    pre(); 

getch();
return 0;
}


void pre(){
int n, acc = 1;
printf("Input numbr: ");
scanf("%d",&n);
if (n == 0 || n == 1)
   acc = 1;
else 
     for (int i = 2; i <= n; i++)
         acc *= i;
printf("%d! = %d\n", n, acc);
}     


