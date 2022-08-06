// nhap vao mot chuoi bat ki, xoa het cac ki tu và so, chi giu lai cac chu cai
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
 
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char str[100];
  	scanf("%[^\n]", str);
  	int i,j;
  	bool all_al = false;
  	while(all_al == false) // lap de xoa ki tu khong phai chu cai
  	{
  		all_al = true;
  		for(i = 0; i < strlen(str);i++)
  		{
  			if(!isalpha(str[i])) // kiem tra xem str[i] co phai la chu cai khong
			{
				for(j = i; j < strlen(str) ; j++)	// xoa str[i] neu str[i] khong phai chu cai
				{
					str[j] = str[ j + 1];
				}	
			}	
		}
		for( i = 0; i < strlen(str);i++)	// kiem tra trong str co ki tu nao khong phai chu cai khong
		{
			if(!isalpha(str[i]))
				all_al = false;
		}
	}
	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%s\n", str);
	
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

