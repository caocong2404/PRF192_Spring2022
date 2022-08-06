#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char fname[] = "6-test_rewind.txt";
	char c;
	int i;
	FILE* f = fopen(fname, "r");
	printf("10 first characters: \n");
	for (i = 0; i < 10; i++) putchar (fgetc(f));
	fseek(f,0, SEEK_CUR);
	printf("\n\nAfter rewind: \n");
	while ((c = fgetc(f)) != EOF) putchar(c);
	fclose(f);
	getchar();
	return 0;
}
