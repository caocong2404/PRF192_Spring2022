 //nhap n so nguyen va n duong. tim so xuat hien nhieu nhat
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
 
 
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	int arr[1000], b[1000] = {0}, c[1000] = {0}; //Khoi tao 3 mang so nguyen
  	int i;
  	scanf("%d", &n); //Nhap so phan tu cua mang arr
  	for(i = 0; i < n;i++)
  	{
  		scanf("%d", &arr[i]);	// Nhap n phan tu mang so nguyen arr
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] > 0) //Mang so nguyen b[] ghi lai so lan xuat hien cua 
			b[arr[i]]++;  //cac phan tu lon hon 0 trong day arr
		if(arr[i] < 0) //Mang so nguyen c[] ghi lai so lan xuat hien cua 
			c[-arr[i]]++; //cac phan tu nho hon 0 trong day arr
	}
	int max = 0;
	for(i = 0; i <n ;i++)
	{
		if(arr[i] > 0)
		{
			if(b[arr[i]] > max)
				max = b[arr[i]];
		}
		else
		{
			if(c[-arr[i]] > max)
				max = c[-arr[i]];
		}
	}// Vong lap tra ra so lan xuat hien nhieu nhat cua mot phan tu trong arr
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i = 0; i <1000 ;i++)
	{
		if(b[i] == max)
		{
			printf("%d", i);
		}
		if(c[i] == max)
			printf("%d", -i);
	} //In ra phan tu co lan xuat hien nhieu nhat trong day
	
 
 
 
 
 
 
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

