#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//add
void add(int value, int *a, int *pn)
{
	a[*pn] = value;
	(*pn);
}

//search
int search(int x, int *a, int n)
{
	int i;
	for (i = 0; i < n; i++) if (a[i] == x) return i;
	return -1;
}

//remove
int removeOne(int pos, int *a, int *pn)
{
	if (pos < 0 || pos >= *pn) return 0;
	int i;
	for (i = pos; i < *pn - 1; i++) a[i] = a[i+1];
	(*pn)--;
	return 1;
}

int removeAll(int x, int *a, int *pn)
{
	int result = 0;
	
	int i, j;
	for (i = (*pn) - 1; i >= 0; i--)
		if (a[i] == x)
		{
			result = 1;
			for (j = i; j < (*pn) - 1; j++)
			(*pn)--;
		}
	return result;
}

void printAsc(int *a, int n)
{
	int **adds = (int**) calloc(n, sizeof(int*));
	int i, j;
	for (i = 0; i < n; i++)	adds[i] = &a[i];
	
	int *t;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (*adds[i] < *adds[j])
			{
				t = adds[i];
				adds[i] = adds[j];
				adds[j] = t;
			}
		for (i = 0; i < n; i++) printf("%d ", *adds[i]);
		free(adds);
}

int main(){
	int n;
	return 0;
}
