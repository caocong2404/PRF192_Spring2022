#include <stdio.h>
#include <ctype.h>
#include <string.h>

int exist(char* filename){
	int existed = 0;
	FILE* f = fopen(filename, "r");
	if (f != NULL){
		existed = 1;
		fclose(f);
	}
	return existed;
}

int printFile(char *filename, int *count, double*sum){
    FILE* f = fopen(filename, "w");
    double average = *sum/ *count;
    fflush(stdin);
	fprintf(f, "Number of value:  %d\n", *count);
    fprintf(f, "Average = %lf\n", average);
    fclose(f);	
}

void processFile(char* filename, int* pCount, double* pSum){
    if (exist(filename) == 0)
	{
		printf("File does not exist!\n");
	}
	FILE* f = fopen(filename, "r");
    *pCount = 0;
    *pSum = 0;
    double x;
    while (fscanf(f, "%lf", &x) == 1)
    {
     	(*pCount)++;
     	(*pSum) += x;
	}
	fclose(f);
}

int main( int argCount, char* args[]){
	double element[200];
    char infName[] = ("5-array3.txt");
    char outfName[] = ("5-array4.txt");
    int count = 0;
    double sum = 0;
    processFile(infName, &count, &sum);
    printf("Number of values in the file: %d\n", count);
    printf("Average of values in the file: %lf\n", sum/count);
    printFile(outfName, &count, &sum);
    getchar();
    return 0;
}
