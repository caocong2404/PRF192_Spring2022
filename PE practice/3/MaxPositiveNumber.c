#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int sochan_max(int a[], int n)
{
    int max, j;
    int i = 0;
    while (a[i] % 2 != 0)
        i++;
    max = a[i];
    for (j = i + 1; j < n; j++)
        if (a[j] % 2 == 0)
            if (max < a[j])
                max = a[j];
    return max;
}
 
int main()
{
     system("cls");
    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int arr[5], i;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%d", sochan_max(arr, 5));
    
    
    
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}

