#include <stdio.h>

int main(){
    int i, j, h;
    scanf("%d", &h);

    for (j = 1; j <= 2*h - 1; ++j){
          for (i = 1; i <= h; i++)
          {
              if ((j >= h - i + 1) && (j <= h + i - 1))
              printf("* ");
                          else printf("  ");
          }
    printf("\n");
    }
    
    getch();
    return 0;
}
