#include <stdio.h>
#include <math.h>

void inputValue(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         printf("#%d: ", (i + 1)); 
         scanf("%d", &a[i]);
     }
}

int checkValue(int *a, int n){
    int i;
    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0 && a[i] < 2004) return 1;
        return 0;
}



int main(){
    int a[1000];
    int n;
    scanf("%d", &n);
    inputValue(a, n);
    int check = checkValue(a, n);
    if (check == 1) printf("Exist even value less than 2004");
       else printf("Doesnt exist even value less than 2004");
    
    
    getch();
    return 0;
}
