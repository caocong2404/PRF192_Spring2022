#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char fname[] = "7-test_fseek.txt";
	char c;
	int i;
	FILE* f = fopen(fname, "r");
	printf("15 first characters: \n");
	for (i = 0; i < 15; i++) putchar(fgetc(f));
	puts("\n");
	fseek(f, -5, SEEK_CUR);
	for (i = 0; i < 5; i++) putchar(fgetc(f));
	puts("\n");
	fseek(f,-10,SEEK_END);
	for (i = 0; i < 5; i++) putchar(fgetc(f));
	puts("\n");
	fseek(f, 10, SEEK_SET);
	for (i = 0; i < 5; i++) putchar (fgetc(f));
	fclose(f);
	getchar();
	return 0;
}
