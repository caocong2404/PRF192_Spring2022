#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	int i, cn1 = 0, cn2 = 0;
	for (i = 0; i < strlen(c);i++)
	{
		if (isalpha(c[i])) ++cn1;
		else if (isdigit(c[i])) ++cn2;
	}
	printf("%d %d %d", cn1, cn2, strlen(c) - cn1 - cn2);
	
	return 0;
}
