//Ðem các so tu nhiên trong xâu nhap tu bàn phím. 
//		Các kí tu so gan nhau ghép thành 1 so tu nhiên. 
//Ví d?: a123bc4d56ef
  //    cho ra dáp án là : 3


#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s[100];
    int i=0,j,dem=0;
    gets(s);
    while (i<=strlen(s))
    {
        j=0;
        while ( s[i]>='0' && s[i]<='9' )
        {
             i++;
             j++;
        }
        i++;
        if (j!=0) dem++;
     }
     printf("%d",dem);
     getch(); 
}

