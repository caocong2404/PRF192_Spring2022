#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int menu(){
    int choice;
    printf("============================================================\n");
    printf("Managing a parallel arrays\n");
	printf("1- Add a new employee\n");
	printf("2- Search employees(name).\n");
	printf("3- Remove employee(code).\n");
	printf("4- Print out the list in descending order(salary/allowance).\n");
	printf("Others- Quit.\n");
	printf("Choose [1...4]: ");
	scanf("%d", &choice);
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

char* nameStr(char s[]){
      trim(s);
      strlwr(s);
      int L = strlen(s);
      int i;
      for (i = 0; i < L; i++)
          if (i == 0 || (i > 0 && s[i-1] == ' ')) s[i] = toupper (s[i]);
      return s;
}


//in List
void printList(char code[][8], char name[][20], 
     double salary[], double allowance[], int *pn){
     
     int i;
     for(i = 0;i < *pn; i++){  
           printf("#%d. Code: %s\n", (i + 1), code[i]);
           printf("Name: %s\n", name[i]);
           printf("Salary: %.2lf$\n", salary[i]);
           printf("Allowance: %.2lf$\n", allowance[i]);
           printf("\n");
     }
}
//Them Code(char 8), name (char 20), salary(double), allowance(double)
void addEmployee(char code[][8], char name[][20], 
     double salary[], double allowance[], int *pn){
     
     char codeE[20], nameE[20];
     double s, a;
     
        printf("Add a code(8 character): ");
        fflush(stdin);
        scanf("%8[^\n]", codeE);
        strcpy(code[*pn], codeE);
        
        printf("Enter a name of employee: ");
        fflush(stdin);
        scanf("%20[^\n]", nameE);
        nameStr(nameE);
        strcpy(name[*pn], nameE);
        
        printf("Salary of employee: ");
        fflush(stdin);
        scanf("%lf", &s);    
        salary[*pn] = s;
        
        printf("Allowance of employee: ");
        scanf("%lf", &a);    
        allowance[*pn] = a;
        printf("Add......Done!");
        (*pn)++;
}
//tim kiem
void searchEmployee(char code[][8], char name[][20], 
     double salary[],double allowance[], int *pn){
    
     char employee[21];        
	 int i, count = 0;
	 printf("Searching the employee\n");
	 printf("Type the name: ");
	 fflush(stdin);
     scanf("%20[^\n]", &employee);
	 for (i = 0; i < *pn; i++){
	     if (strcmp(name[i], employee) == 0) {
            printf("#%d. Code: %s\n", (i + 1), code[i]);
            printf("Name: %s\n", name[i]);
            printf("Salary: %.2lf$\n", salary[i]);
            printf("Allowance: %.2lf$\n", allowance[i]);
            printf("\n");
            count++;
         }
      }
	  if (count == 0) printf("The data does not exist");
}
//xoa
void removeEmployee(char code[][8], char name[][20],
     double salary[], double allowance[], int *pn){
     
     int pos;
     char remove[8];  
	 int i, j, count = 0;
	 fflush(stdin);
	 printf("Enter the code you want to remove: ");
	 scanf("%8[^\n]", &remove);
	 
	 for (i = 0; i < *pn; i++)
	    if (strcmp(code[i], remove) == 0)
		{ 
			for (j = i+1; j < *pn; j++)
				{ 
		            strcpy(name[j-1], name[j]);
		            strcpy(code[j-1], code[j]);
		            salary[j-1] = salary[j];
		            allowance[j-1] = allowance[j];
		        }
             count++;
		    (*pn)--;
		    printf("Remove......Done!");
		}
		 if (count == 0) printf("The data does not exist");
}

//sap xep
void printDesc(char code[][8], char name[][20], 
     double salary[],double allowance[], int *pn){
            
     int i, j;
     char tempName[20], tempCode[8];
     double tempSalary, tempAllowance;
	 for (i = 0; i < *pn - 1; i++)
		 for (j = i + 1; j < *pn; j++)
             if ((salary[j] + allowance[j]) > (salary[j-1] + allowance[j-1]))
			 {             
                 strcpy(tempCode, code[i]);
	             strcpy(code[i], code[j]);
	             strcpy(code[j], tempCode);
	            
                 strcpy(tempName, name[i]);
	             strcpy(name[i], name[j]);
	             strcpy(name[j], tempName);

	             tempSalary = salary[i];
	             salary[i] = salary[j];
	             salary[j] = tempSalary;
	            
	             tempAllowance = allowance[i];
	             allowance[i] = allowance[j];
	             allowance[j] = tempAllowance;
              }
}
	            
//main
int main(){
    
    char code[100][8], name[100][20];
    double salary[100], allowance[100];
    int choice;
    int n = 0;
    do
    {
        choice = menu();
        switch(choice){
                       case 1://add
                            if (n == 100) printf("Sorry! The list is full. :(\n");
                            else {
                                 addEmployee(code, name, salary, allowance, &n);
                            }
                            printf("\n\n");        
                            break;
                       case 2://search using a name inputted.
                            if (n == 0) printf("Sorry! The list is empty. :(\n");
                            else {
                                 searchEmployee(code, name, salary, allowance, &n);
                            }
                            printf("\n\n");
                            break;
                       case 3://removed based on a code inputted
                            if (n == 0) printf("Sorry! The array is empty!\n");
                            else {
					             removeEmployee(code, name, salary, allowance, &n);
                            }
                            printf("\n\n");
                            break;
                       
                       case 4://descending based on salary + allowance
                            if (n == 0) printf("Sorry! The list is empty. :(\n");
                            else {
                                 printf("The list after being arranged: \n\n");
                                 printDesc(code, name, salary, allowance, &n);
                                 printList(code, name, salary, allowance, &n);
                            }
                            printf("\n\n");
                            break;
                       default://quit
                            if (choice < 0) printf("The option is not suppord\n");
                               else printf("Have a good day!! See you soon <3\n");
        }
    } while (choice > 0 && choice < 5);
    
    getchar();
    getch();
    return 0;
}
