#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "myTrim.c"
void readFile(char* filename, char book[][50], int quantity[], int *pn, int *ptotal){
	*pn = 0;
	FILE* f = fopen(filename, "r" );
	if (f != NULL){
		while (fscanf(f, "%50[^|]|%d%*c", book[*pn], quantity[*pn]) == 2)
		{
			(*pn)++;
			(*ptotal) += quantity[*pn];
		}
		fclose(f);
	}
}

void writeFile(char* filename, char book[][50], int quantity[], int n) {
	FILE* f = fopen(filename, "w");
	int i;
	for (i = 0; i < n; i++)
		fprintf(f, "#%d: Name: %-45s \t|\tQuantity: %d\n", (i + 1), book[i], quantity[i]);
	fclose(f);
}

int menu() {
	int choice;
	printf("\n=~~~~~~~~~~~~~~~ CONG-LIBRARY ~~~~~~~~~~~~~~~~~~~=");
	printf("\n| 1. Add a book into the list        	Press: 1 |");
	printf("\n| 2. Search a book           		Press: 2 |");
	printf("\n| 3. Update a book               	Press: 3 |");
	printf("\n| 4. Remove a book                 	Press: 4 |");
	printf("\n| 5. Show the list (Alphabetical)       Press: 5 |");
	printf("\n| 6. Show the list(ASC Quantity)  	Press: 6 |");
	printf("\n| 7. Exit the program              	Press: 7 |");
	printf("\n!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n");
	printf("\nPlease, choose in range [1..7]: ");
	fflush(stdin);
	scanf("%d", &choice);
	return choice;
}

int updateMenu() {
	int choice;
	printf("\nWhat part of book you wanna update?\n");
	printf(">>Press 1 - To update title\n");
	printf(">>Press 2 - To update quantity\n");
	printf(">>Press 3 - To leave this function'\n");
	printf("\nPlease, choose in range [1..3]: ");
	fflush(stdin);
	scanf("%d", &choice);
	return choice;
}

void addBook(char book[][50], int quantity[],  int *pn, int *ptotal) {
	char addBook[50];
	int quantites;
	printf("\n|=- ADD BOOK -=|\n");
	printf("Enter information about the book:\n");
	printf("Title of the book: ");
	fflush(stdin);
	scanf("%50[^\n]", addBook);
	nameStr(addBook);

	printf("Quantity of the book: ");
	fflush(stdin);
	scanf("%d", &quantites);

	*ptotal += quantites;
	if (*ptotal <= 100) {
		strcpy(book[*pn], addBook);
		quantity[*pn] = quantites;
		(*pn)++;
		printf("\nAdded!!\n");
	} else {
		printf("\nFaild! The bookcase is not have enough space!\n");
		*ptotal -= quantites;
	}

}

int search(char book[][50], char searchBook[] , int *pn) {
	int i;
	for (i = 0; i < *pn; i++)
		if (strcmp(book[i], searchBook) == 0)
			return i;
	return -1;
}

void searchBook(char book[][50], int quantity[], int *pn) {
	char searchBook[50];
	int i;
	printf("\n|=- SEARCH BOOK -=|\n");
	printf("Enter title of the book you want to search: ");
	fflush(stdin);
	scanf("%50[^\n]", searchBook);
	nameStr(searchBook);
	int pos = search(book, searchBook, pn);

	if (pos < 0 || pos >= *pn)
		printf("\nThis book is not existed!\n");
	else {
		printf("\nFound it!\n");
		printf("Quantity of book %s is: %d\n", searchBook, quantity[pos]);
	}
}


void updateBook(char book[][50], int quantity[], int *pn, int *ptotal) {
	char updateBook[50];
	char newBook[50];
	int cache;
	int newQuantity;
	int outSubMenu = 0;
	printf("\n|=- UPDATE BOOK -=|\n");
	printf("Enter title of book you want to update: ");
	fflush(stdin);
	scanf("%50[^\n]", updateBook);
	nameStr(updateBook);
	int pos = search(book, updateBook, pn);
	if (pos < 0 || pos >= *pn)
		printf("\nThis book is not existed!\n");
	else {
		printf("\nFound it!\n");
		int updateChoice;
		do {
			updateChoice = updateMenu();
			switch (updateChoice) {
				case 1://edit title
					printf("\nEnter new title for book: ");
					fflush(stdin);
					scanf("%50[^\n]", newBook);
					nameStr(newBook);
					strcpy(book[pos], newBook);
					printf("\nUpdated success!\n");
					break;

				case 2://edit quatity
					cache = quantity[pos];
					*ptotal -= quantity[pos];
					printf("\nEnter new quantity for book: ");
					fflush(stdin);
					scanf("%d", &newQuantity);
					*ptotal += newQuantity;

					if (*ptotal <= 100) {
						quantity[pos] = newQuantity;
						printf("\nUpdated success!\n");
					} else {
						printf("\nFail! The bookcase is not have enough space!\n");
						*ptotal -= newQuantity;
						*ptotal += cache;
					}
					break;
				default:
					if (updateChoice == 3)
						outSubMenu = 1;
					else
						printf("Wrong choice! Enter again!\n");
			}
		} while (outSubMenu == 0);
		printf("\nUpdated!\n");
	}
}

void removeBook(char book[][50], int quantity[], int *pn, int *ptotal) {

	char removeBook[50];
	int i;
	printf("\n|=- REMOVE BOOK -=|\n");
	printf("Enter title of book you want to remove: ");
	fflush(stdin);
	scanf("%50[^\n]", removeBook);
	nameStr(removeBook);
	int pos = search(book, removeBook, pn);
	if (pos < 0 || pos >= *pn)
		printf("\nThis book is not existed!\n");
	else
		*ptotal -= quantity[pos];

	for (i = pos; i < *pn - 1; i++) {
		strcpy(book[i], book[i + 1]);
		quantity[i] = quantity[i + 1];
	}
	(*pn)--;
	printf("\nSuccessful!\n");
}

void printList(char book[][50], int quantity[], int *pn, int *ptotal) {
	int i;
	printf("\nAll books in List\n");
	for (i = 0; i < *pn; i++) {
		printf ("#%d: Name: %-45s \t|\tQuantity: %d\n", (i + 1), book[i], quantity[i]);
	}
	printf("\nTotal books: %d\n", *ptotal);
}

void sortAlpha(char book[][50], int quantity[], int *pn) {
	int i, j;
	char tempBook[50];
	int tempQuantity;
	for (i = 0; i < *pn - 1; i++)
		for (j = i + 1; j < *pn; j++)
			if (strcmp(book[i], book[j]) > 0) {

				strcpy(tempBook, book[i]);
				strcpy(book[i], book[j]);
				strcpy(book[j], tempBook);

				tempQuantity = quantity[i];
				quantity[i] = quantity[j];
				quantity[j] = tempQuantity;
			}
}

void sortQuan(char book[][50], int quantity[], int *pn) {
	int i, j;
	char tempBook[50];
	int tempQuantity;
	for (i = 0; i < *pn - 1; i++)
		for (j = i + 1; j < *pn; j++)
			if (quantity[i] > quantity[j]) {
				strcpy(tempBook, book[i]);
				strcpy(book[i], book[j]);
				strcpy(book[j], tempBook);

				tempQuantity = quantity[i];
				quantity[i] = quantity[j];
				quantity[j] = tempQuantity;
			}
}

int main() {
	char fileIn[] 	= "InputLIBRARY.txt";
	char fileOut[] 	= "LIBRARY.txt";
	char book[100][50];
	int quantity[100];
	int choice;
	int n = 0;
	int total = 0;
	int outMainMenu = 0;
	do {
		choice = menu();
		switch(choice) {
			case 1: //add book book[title, quantity]
				readFile(fileIn, book, quantity, &n, &total);
				addBook(book, quantity, &n, &total);
				printf("\n");
				break;

			case 2://search
				if (n == 0) printf("Sorry! The library is empty!\n");
				else searchBook(book, quantity, &n);
				printf("\n");
				break;

			case 3://update
				if (n == 0) printf("Sorry! The library is empty!\n");
				else updateBook(book, quantity, &n, &total);
				printf("\n");
				break;

			case 4://remove
				if (n == 0) printf("Sorry! The library is empty!\n");
				else removeBook(book, quantity, &n, &total);
				printf("\n");
				break;

			case 5: //Show the list (Alphabetical)
				if (n == 0) printf("Sorry! The library is empty!\n");
				else {
					sortAlpha(book, quantity, &n);
					printList(book, quantity, &n, &total);
					writeFile(fileOut, book, quantity, n);
					printf("\nResult file : %s \n", fileOut);
					printf("\n");
				}
				break;

			case 6://Show the list(ASC Quantity)
				if (n == 0) printf("Sorry! The library is empty!\n");
				else {
					sortQuan(book, quantity, &n);
					printList(book, quantity, &n, &total);
					writeFile(fileOut, book, quantity, n);
					printf("\nResult file : %s \n", fileOut);
					printf("\n");
				}
				break;

			default:
				if (choice == 6)
					outMainMenu = 1;
				else
					printf("\nWrong Choice!");
		}
	} while (outMainMenu == 0);

	printf("\nHave a good day. See you soon!\n");
	getchar();
	return 0;
}
