#include <stdio.h>
#include <ctype.h>
#include <string.h>

void fileToArray(char* fname, int* a, int* pn){
     FILE* f = fopen(fname, "r");
     
     fscanf(f, "%d", pn);
     
     int i;
     for (i = 0; i < *pn; i++) fscanf(f, "%d", &a[i]);
     fclose (f);
}

void Asc( int *a, int n){
     int i, j, t;
     for (i = 0; i < n - 1; i++)
         for (j = n - 1; j > i; j--){
                if (a[j] < a[j-1]){
                   t = a[j];
                   a[j] = a[j-1];
                   a[j-1] = t;
                }
             }
}

void print( int *a, int n){
     int i;
     printf("Sorting: ");
     for (i = 0; i < n; i++) printf("%d ", a[i]);
}

int printFile(char *fname, int *a, int n){
    FILE* f = fopen(fname, "w");
    fprintf(f, "Number of elements: %d\n", n);// number of elements
    int i;
    fprintf(f,"Sorting: ");
    for (i = 0; i < n; i++){
        fprintf(f, "%d ", a[i]);
    }
    fclose(f);
}

int main( int argCount, char* args[]){
    char infName[] = ("4-array1.txt");
    char outfName[] = ("4-array2.txt");
    int a[200];
    int n = 0;
    fileToArray(infName, a, &n);
    Asc(a, n);
    print(a, n);
    printFile(outfName, a, n);
    
    getchar();
    return 0;
}
