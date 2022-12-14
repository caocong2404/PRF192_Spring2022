#include <stdio.h>
#include <ctype.h>
#include <string.h>

int exist (char *filename){
    int existed = 0;
    FILE* f = fopen(filename, "r");
    if (f != NULL){
          existed = 1;
          fclose(f);
    }
    return existed;
}

int writeFile( char* filename){
    if (exist(filename) == 1)
    {
         printf("The file %s existed. Override it Y/N?: ", filename);
         if (toupper(getchar()) == 'N') return 0;
    }
    char line[201];
    int length = 0;
    
    FILE* f = fopen(filename, "w");
    fflush(stdin);
    do
    {
         gets(line);
         length = strlen(line);
         if (length > 0)
         {
            fprintf(f, "%s\n", line);
         }
    } while (length > 0);
    fclose(f);
    return 1;
}

int printFile( char* filename){
    char c;
    if (exist (filename) == 0){
       printf("The file %s dose not exist.\n", filename);
       return 0;
    }
    //open
    FILE* f = fopen(filename, "r");
    char line[201];
    while (fscanf(f, "%[^\n]%*c)", line) > 0) puts(line);
    fclose(f);
    return 1;
}

int main( int argCount, char* args[]){
    char filename[81];
    printf("Program for writing then reading a file\n");
    printf("Enter a filename: ");
    gets(filename);
    printf("Write file:\n");
    if (writeFile(filename) == 1){
          printf("Data in the file %s: \n", filename);
          if (printFile(filename) == 0) printf("File error!\n");   
    }
    else printf("Write file fail!\n", filename);
    getchar();
    return 0;
}
