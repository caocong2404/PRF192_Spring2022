#include<stdio.h>

int main() {
    int tt = 5000;
    int *hari = &tt;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *hari += 1;
        printf(" tt = %d; *hari = %d\n", tt, *hari);
    }
    
    getch();
    return 0;
}
