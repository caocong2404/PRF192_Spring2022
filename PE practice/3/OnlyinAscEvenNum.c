//nhap n so, chi in even number
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
    // system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int a[5];
    int i, j, t;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
 
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    
    for (i = 0; i < 4; i++){
    	for (j = i + 1; j < 5; j++)
    	if (a[i] > a[j]){
    		t = a[i];
    		a[i] = a[j];
    		a[j] = t;
		}
	}
	for (i = 0; i < 5; i++)
    {
    	if (a[i] % 2 == 0)
        printf("%d ", a[i]);
    }
    return 0;
}
