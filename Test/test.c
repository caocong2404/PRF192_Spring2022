#include <stdio.h>

int main()
{
    int n1=10;
    printf("Var. n1, add.: %u, value: %d\n",&n1,n1);
    
    int &n2=n1;
    printf("Var. n2, add.:%u, value: %d\n",&n2,n2);
    
    getchar();
    return 0;
}
    
