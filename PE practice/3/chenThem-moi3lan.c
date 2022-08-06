#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char s[128], newS[128];
	int i, j;
	
	scanf("%[^\n]%*c", s);
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 3 == 0 && i != 0){
			newS[j] = '-';
			j++;
		}
		newS[j] = s[i];
		j++;
	}
	
	newS[j] = '\0';
	printf("%s", newS);
	//or printf(newS);
	
	return 0;
}
