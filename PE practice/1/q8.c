#include <stdio.h>

int main(){
    char word;
    scanf("%c", &word);
    fflush(stdin);
    printf("location = %d  O = 0%o", word, word);
    
    getchar();
    return 0;
    
}
