#include <stdio.h>
#include <math.h>

void input(int *a, int n){
     int i;
     for (i = 0; i < n; i++){
         scanf("%d", &a[i]);
     }
}

float averageValue(int *a, int n){
    int i;
    int sum = 0;
    float average;
    for (i = 0; i < n; i++){
        sum += a[i];
    }
    average = (double)sum / n;
    return average;
}

float averageValueP(int *a, int n){
      int i;
      int sum = 0;
      float average;
      
      for (i = 0; i < n; i++){
          if (a[i] > 0) sum += a[i];
      }
      average = (double)sum / n;
      return average;
}

int main(){
    int a[1000];
    int n;
    do
    {
        scanf("%d", &n);
        if ( n < 0 || n > 100) printf("Input correctly\n");
    } while ( n < 0 || n > 100);
    input(a, n);
    printf("Trung binh cong la %.2f", averageValue(a, n));
    printf("Trung binh cong cua cac so duong la %.2f", averageValueP(a, n));
    
    
    getch();
    return 0;
}
