#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int menu(){
    int choice;
    printf("==================================================\n");
    printf("Managing a parallel arrays\n");
    printf("1. Adding a new soft drink.\n");
    printf("2. Printing out items(known make).\n");
    printf("3. Printing out items(v1 to v2).\n");
    printf("4. Printing the list in ascending(volumes/prices).\n");
	printf("Others- Quit\n");
	printf("Choose [1...4]: ");
	fflush(stdin);
	scanf("%d", &choice);
	return choice;
}
//cat bo khoang trong dau chuoi
char* lTrim(char s[]){
      int i = 0;
      while (s[i] == ' ') i++;
      if (i > 0) strcpy(&s[0], &s[i]);
      return s;
}
//cat bo khoang trong cuoi chuoi
char* rTrim(char s[]){
     int i = strlen(s) - 1;
     while (s[i] == ' ') i--;
     s[i+1] = '\0';
     return s;
}
// cat bo khoang trong thua lTrim + rTrim
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
//cap ki tu dau
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
void printList(char name[][20], char make[][20], 
     int volume[], int price[], int duration[], int *pn){
     
     int i;
     for(i = 0; i < *pn; i++){  
           printf("#%d. Name: %s\n", (i + 1), name[i]);
           printf("MFG: %s\n", make[i]);
           printf("Volume: %d ml\n", volume[i]);
           printf("Price: %d$\n", price[i]);
           printf("Duration: %d days\n", duration[i]);
           printf("\n");
     }
}
//print soft drink
void addSDrink(char name[][20], char make[][20], 
     int volume[], int price[], int duration[], int *pn){
     
     char nameD[20], makeD[20];
     int volumeD, priceD, durationD;
     
     printf("Enter the soft drink name(8 character): ");
     fflush(stdin);
     scanf("%21[^\n]", nameD);
     nameStr(nameD);
     strcpy(name[*pn], nameD);
        
     printf("Enter the soft drink maker: ");
     fflush(stdin);
     scanf("%21[^\n]", makeD);
     strcpy(make[*pn], makeD);
        
     printf("Volume: ");
     fflush(stdin);
     scanf("%d", &volumeD);    
     volume[*pn] = volumeD;
        
     printf("Price: ");
     fflush(stdin);
     scanf("%d", &priceD);    
     price[*pn] = priceD;
        
     printf("Duration: ");
     fflush(stdin);
     scanf("%d", &durationD);    
     duration[*pn] = durationD;
        
     printf("Add......Done!");
     (*pn)++;
}

void printMake(char name[][20], char make[][20], 
     int volume[], int price[], int duration[], int *pn){
         
     char makeE[20];
     int i, count = 0;
     printf("Input maker you want to search: ");
     fflush(stdin);
     scanf("%20[^\n]", &makeE);
           for (i = 0; i < *pn; i++){
               if (strcmp(make[i], makeE) == 0) {
                  printf("#%d. Name: %s\n", (i + 1), name[i]);
                  printf("MFG: %s\n", make[i]);
                  printf("Volume: %d ml\n", volume[i]);
                  printf("Price: %d$\n", price[i]);
                  printf("Duration: %d days\n", duration[i]);
                  printf("\n");
                  count++;
               }
           }
           if (count == 0) printf("The maker does not exist!!");
}    

void printVolume(char name[][20], char make[][20], 
     int volume[], int price[], int duration[], int *pn){
     
     int v1, v2;
     int i, temp;
     printf("Searching by volume\n");
     printf("Enter a volume:\n");
     printf("Form: ");
     scanf("%d%", &v1);
     printf("To:");
     scanf("%d%", &v2);
     if (v1 > v2)
     {
        temp = v1;
        v1   = v2;
        v2   = temp;  
     }
     for (i = 0; i < *pn; i++){
         if (v1 <= volume[i] && v2 >= volume[i]){      
            printf("#%d. Name: %s\n", (i + 1), name[i]);
            printf("MFG: %s\n", make[i]);
            printf("Volume: %d ml\n", volume[i]);
            printf("Price: %d$\n", price[i]);
            printf("Duration: %d days\n", duration[i]);
            printf("\n");  
         } 
     }
} 

void printAsc(char name[][20], char make[][20], 
     int volume[], int price[], int duration[], int *pn){
     
     int i, j;
     char tempN[21], tempM[21];
     int tempV, tempP, tempD;
     
     for (i = 0; i < *pn - 1; i++)
         for (j = i + 1; j < *pn; j++){
             if (volume[i] > volume[j]){
                
                strcpy(tempN,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],tempN);
                
                strcpy(tempM,make[i]);
                strcpy(make[i],make[j]);
                strcpy(make[j],tempM);
                
                tempV     = volume[i];
                volume[i] = volume[j];
                volume[j] = tempV; 
                
                tempP     = price[i];
                price[i]  = price[j];
                price[j]  = tempP;
                
                tempD       = duration[i];
                duration[i] = duration[j];
                duration[j] = tempD;
             }
         }
}

int main(){
    
    char name[100][20], make[100][20];
    int volume[100], price[100], duration[100];
    int choice;
    int n = 0;
    do
    {
        choice = menu();
        switch(choice){
                       case 1:
                            if (n == 100) printf("Sorry! The list is full. :(\n");
                            else {
                                 addSDrink(name, make, volume, price, duration, &n);
                            }
                            printf("\n");        
                            break;
                       case 2:
                            if (n == 0) printf("Sorry! The list is empty. :(\n");
                            else {
                                 printMake(name, make, volume, price, duration, &n);
                            }
                            printf("\n");
                            break;
                      case 3:
                            if (n == 0) printf("Sorry! The array is empty!\n");
                            else {
					             printVolume(name, make, volume, price, duration, &n);
                            }
                            printf("\n");
                            break;
                       
                        case 4:
                            if (n == 0) printf("Sorry! The list is empty. :(\n");
                            else {
                                 printf("The list after being arranged: \n");
                                 printAsc(name, make, volume, price, duration, &n);
                                 printList(name, make, volume, price, duration, &n);
                            }
                            printf("\n");
                            break; 
                       default:
                            if (choice < 0) printf("The option is not suppord\n");
                               else printf("Have a good day!! See you soon <3\n");
        }
    } while (choice > 0 && choice < 5);
    
    getchar();
    getch();
    return 0;
}
