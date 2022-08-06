#include <stdio.h>
#include <math.h>

void inputArray(float *a, int n){
     int i;
     for (i = 0; i < n; i++){
         scanf("%f", &a[i]);
     }
}

float maxValue(float *a, int n){
      float max = a[0];
      int i;
      for ( i = 1; i < n; i++){
          if ( max < a[i]) max = a[i];
      }
      return max;
} 



int main(){
    float a[1000];
    int n;
    scanf("%d", &n);
    inputArray(a, n);
    printf("max value is : %.2f", maxValue (a, n));
      
    
    getch();
    return 0;
}
