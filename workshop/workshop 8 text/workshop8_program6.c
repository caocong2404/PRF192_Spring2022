#include <stdio.h>
#include <string.h>

void readFile(char *filename, char name[][36], char address[][36], int *mark, int *pn){
	*pn = 0;
	FILE* f = fopen(filename, "r" );
	if (f != NULL){
		while (fscanf(f, "%35[^|]|%35[^|]|%d%*c", name[*pn], address[*pn], &mark[*pn]) == 3)
			(*pn)++;
		fclose(f);
	}
}

void printList(char name[][36], char address[][36], int *mark, int n){
	int i;
	for (i = 0; i < n; i++) 
		printf ("#%d: %-15s |\t%-35s |\tmark:%4d\n", (i + 1), name[i], address[i], mark[i]);
}

void sortFile(char name[][36], char address[][36], int *mark, int n){
	int i, j;
	char tempName[36], tempAddress[36];
	int tempMark;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (mark[i] < mark[j]){
				strcpy(tempName, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], tempName);
				
				strcpy(tempAddress, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], tempAddress);
				
				tempMark = mark[i];
				mark[i] = mark[j];
				mark[j] = tempMark; 
		}
}
	
writeFile(char* filename, char name[][36], char address[][36], int *mark, int n){
	FILE* f = fopen(filename, "w");
	int i;
	for (i = 0; i < n; i++)
		fprintf(f, "#%d: %-15s |\t%-35s |\tmark:%4d\n", (i + 1), name[i], address[i], mark[i]);
	fclose(f);
}

int main(){
	char fileIn[] = "6-students_1.txt";
	char fileOut[] = "6-students_2.txt";
	char name[50][36];
	char address[50][36];
	int mark[50];
	int n = 0;
	readFile(fileIn, name, address, mark, &n);
	sortFile(name, address, mark, n);
	printf("Sorted List : \n\n");
	printList(name, address, mark, n);
	writeFile(fileOut, name, address, mark, n);
	printf("\nResult file : %s \n", fileOut);
	getchar();
	return 0;
}
