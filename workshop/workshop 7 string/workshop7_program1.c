#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(){
    int choice;
    printf("==========================================\n");
    printf("Managing a list of 100  student names\n");
    printf("1- Add a student\n");
    printf("2- Remove a student\n");
    printf("3- Search a student\n");
    printf("4- Print the list in ascending order\n");
    printf("5- Quit\n");
    printf("Choose [1..5]: ");
    scanf("%d", &choice);
    printf("\n");
    return choice;
}

char* lTrim(char s[]){
      int i = 0;
      while (s[i] == ' ') i++;
      if (i > 0) strcpy(&s[0], &s[i]);
      return s;
}

char* rTrim(char s[]){
     int i = strlen(s) - 1;
     while (s[i] == ' ') i--;
     s[i+1] = '\0';
     return s;
}

char* trim(char s[]){
      rTrim(lTrim(s));
      char *ptr = strstr(s, "  ");
      while (ptr != NULL)
      {
            strcpy( ptr, ptr + 1);
            ptr = strstr(s, "  ");
      }
      return s;
}

int isFull(char list[100][30], int *pn) {
	return ((*pn) == 100);
}

int isEmpty(char list[100][30], int *pn) {
	return ((*pn) == 0);
}
//in List
void printList(char list[][30], int *pn){
	int i;
	for(i = 0; i < *pn; i++){
		printf("Student #%d: %s\n", (i+1), list[i]);
	}
}
//Them student
void addStudent(char list[][30], int *pn){
     char student[30];
     
     printf("Enter the name of student: ");
     fflush(stdin);
     scanf("%30[^\n]", &student);
     strupr(trim(student));
     strcpy(list[*pn], student);
     (*pn)++;
     printf("The name is added.\n");
}
//Xoa
void removeStudent(char list[][30], int *pn){
     int i, delNum;
     
     printf("Enter a cardinal number you want to remove: ");
     fflush(stdin);
     scanf("%d", &delNum);
     if (delNum > 0 && delNum < *pn){
        for (i = delNum; i < *pn; i++){
            strcpy(list[i], list[i + 1]);
            printf("Remove.....Done");
            (*pn)--;
        }
     }
     else printf("Cannot find the object you want to remove!!");
}
//Tim kiem
void searchStudent(char list[][30], int *pn){
    int i;
    char search[30];
    printf("Enter a name you want to search: ");
    fflush(stdin);
    scanf("%30[^\n]", &search);
    strupr(trim(search));
    for (i = 0; i < *pn; i++){
        if (strcmp(list[i], search) == 0){
           printf("Name has been found at %d\n", (i + 1));
           printf("#%d. %s", i + 1, list[i]);
           break;
        }
    }
        if (strcmp(list[i], search) != 0) printf("The name does not exist");
}
    
//sap xep
void printAsc(char list[][30], int *pn){
     int i, j;
     char t[30];
     for (i = 0; i < *pn -1 ; i++)
         for (j = i + 1; j < *pn; j++){
             if (strcmp(list[i],list[j]) > 0){
                strcpy(t, list[i]);
                strcpy(list[i], list[j]);
                strcpy(list[j], t);
             }                  
         }
}
//main
int main(){
    
    char list[100][30];
    int choice;
    int n = 0;
    do
    {
        choice = menu();
        switch(choice){
                       case 1://add
                            if (isFull(list, &n)) printf("Sorry! The list is full. :(\n");
                            else {
                                 addStudent(list, &n);
                            }
                            printf("\n\n");   
                            break;
                       case 2://remove
                            if (isEmpty(list, &n)) printf("Sorry! The list is empty!\n");
                            else {
					             removeStudent(list, &n);
                            }
                            printf("\n\n");
                            break;
                       case 3://search
                            if (isFull(list, &n)) printf("Sorry! The list is empty. :(\n");
                            else {
                                 searchStudent(list, &n);
                            }
                            printf("\n\n");
                            break;
                       case 4://ascending order
                            if (isFull(list, &n)) printf("Sorry! The list is empty. :(\n");
                            else {
                                 printf("The name after being arranged: \n");
                                 printAsc(list, &n);
                                 printList(list, &n);             
                            }
                            printf("\n\n");
                            break;
                       default://quit
                            if ( choice < 0 || choice > 5) printf("The option is not support\n");
                               else printf("**- Have a good day!! See you soon <3 -**\n");
        }
    } while (choice > 0 && choice < 5);
    
    getchar();
    getch();
    return 0;
}
