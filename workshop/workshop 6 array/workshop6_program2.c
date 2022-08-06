#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>

int isFull (int *a, int n)
{
    return n == 100;
}

int isEmpty(int *a, int n)
{
    return (n == 0);
}


int printMenu(){
    int choice;
    printf("1- Add  a value\n");
    printf("2- Search a value\n");
    printf("3- Print out the array\n");
    printf("4- Print out values in a range\n");
    printf("5- Print out the array in ascending order\n"); 
    printf("Others- Quit\n");
    printf("Select [1..5] : ");
    scanf("%d", &choice);
    return choice;
}

void add( int value, int *a, int *pn){
     a[*pn] = value;
     (*pn)++;
}

int search(int x, int *a, int n){
    int i;
    for (i = 0; i < n; i++) if (a[i] == x) return i;
        return -1;
}

int printArray (int *a, int n){ 
    int i;
    printf("Array: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n\n");
}

void rangeValue (int *a, int n, int minVal, int maxVal){
     int i;
     for (i =0; i < n; i++){
         if (minVal <= a[i] && a[i] <= maxVal){
                    printf("%d ", a[i]);
         }
     }
     printf("\n");
}

void printAsc(int*a, int n) {        
	int** arr =(int**)calloc(n, sizeof(int*));
	int i, j;
	for(i = 0; i < n; i++) arr[i]=&a[i];
	int* t;
	for (i = 0; i < n-1; i++)
	  for (j = i + 1; j < n; j++)
	    if (*arr[i] > *arr[j])
	    {
	    	t = arr[i];
	    	arr[i] = arr[j];
	    	arr[j] = t;
		}
	for (i=0; i < n; i++) printf("%d ", *arr[i]);
	free(arr);
	printf("\n");
}


int main(){
    int a[100];     //array of integer
    int n = 0;       //initial numberof elements      
    int value;         // added/ searched...
    int minVal, maxVal;
    int choice;
    do
    {
        choice = printMenu();
        switch(choice)
        {
            case 1:
                 if (isFull(a, n)) printf("\nSorry1 The array is full.\n");
                 else
                 {    
                      printf("Input an added value: ");
                      scanf("%d", &value);
                      add( value, a, &n);
                      printf("Add \"%d\"\n\n", value);
                 }
                 break;
            case 2:
                 if (isEmpty(a, n)) printf("\nSorry! The array is empty.\n");
                 else
                 {
                     printf("Input the searched value: ");
                     scanf("%d", &value);
                     int pos = search( value, a, n);
                     if (pos < 0) printf("Not found1\n!");
                        else printf("Position is found: %d\n", pos);
                 }
                 break;
            case 3:
                 printArray (a, n); 
                 break;
            case 4:
                 printf("Enter a range (min...max): \n");
                 printf("From (min): ");
                 scanf("%d", &minVal);
                 printf("To (max): ");
                 scanf("%d", &maxVal);
                 rangeValue(a, n, minVal, maxVal); 
                 break;
            case 5:
                 printAsc(a, n);
                 break;   
            default: printf("\nThank you! Have a good day!!\nSee you next time <3\n");       
        }
    } while (choice  > 0 &&  choice < 10);
    
    getch();
    return 0;
}
