//�em c�c so tu nhi�n trong x�u nhap tu b�n ph�m. 
//		C�c k� tu so gan nhau gh�p th�nh 1 so tu nhi�n. 
//V� d?: a123bc4d56ef
  //    cho ra d�p �n l� : 3


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

