//dem so ki tu so trong xau nhap tu ban phim

#include <stdio.h>
#include <conio.h>
#include <string.h>
int demktso(char arr[]) {
	int i, count = 0;
	for (i = 0; i < strlen(arr); i++)
		if ( arr[i]>='0' && arr[i]<='9' )
			count++;
	return count;
}
void main() {
	char s[100];
	gets(s);
	printf("so ki tu so la  :  %d",demktso(s));
	getch();
}

