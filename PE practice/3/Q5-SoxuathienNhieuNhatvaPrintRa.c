#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	int count, max = 0;
	int n = 7;
	int arr[7] = {1, 3, 5, 7, 4, 12, 12};
	int i, j;


//b1: tim so lan xuat hien nhieu nhat (max)
	for (i = 0; i < 7 - 1; i++) {
		count = 0;
		for (j = i + 1; j < 7; j++) {
			if (arr[i] == arr[j] && (arr[i] >= 10 && arr[i] <= 99))
				count++;
		}
		if (max < count) max = count;
	}

//b2: tim so xuat hien nhieu nhat
	if (count == 0) printf("No two digits number!");
	else {
		for (i = 0; i < 7 - 1; i++) {
			count = 0;
			for (j = i + 1; j < 7; j++) {
				if (arr[i] == arr[j] && (arr[i] >= 10 && arr[i] <= 99))
					count++;
			}
			if (max == count) printf("%d", arr[i]);
		}
	}
	return 0;
}
