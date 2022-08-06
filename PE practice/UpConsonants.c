#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char s[100];
	scanf("%[^\n]", &s);
	int i;
	strlwr(s);
	for (i = 0; i < strlen(s); i++){
	if (s[i] == 'a' || s[i] =='o' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' )
	{
		s[i] -= 32;
	}
	}
	printf("%s", s);
	
	return 0;
}
