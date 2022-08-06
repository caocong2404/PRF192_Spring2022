/*
Case 1
Input: Hello World
Output: No
Case 2
Input: Wjbu ubjW
Output: Yes
Case 3
Input: abccba
Output: Yes
*/
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char arr[128];
	int i, j;
	
	scanf("%[^\n]%*c", arr);
	int len = strlen(arr);
	
	for (i = 0; i <= len/2; i++)
	{
		if (arr[i] != arr[len - i - 1]){
			printf("No");
			break;
		}
	}
	
	if (i == len/2 + 1){
		printf("Yes");
	}
	
	return 0;
}
