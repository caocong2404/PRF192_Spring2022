#include <conio.h> 
#include <stdio.h> 
#include <string.h>

int main()
{
    char xau[30];
    int i;
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    for( i=0;i<=strlen(xau)-1;i++)
    {
      if(xau[i]!=32)
      {
          printf("%c",xau[i]);
      }
        else       {
            printf("\n");
      }
    }
    getch();
}

