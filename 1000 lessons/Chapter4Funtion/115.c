#include <stdio.h>
#include <math.h>

float average(float math, float lite){
      float calculateAverage = (math + lite) / 2;
      return calculateAverage;
}
int main(){
    char name;
    float math, lite;
    printf("Enter student name: ");
    scanf("%d", &name);
    fflush(stdin);
    printf("Grade: \n");
    printf("Math: ");
    scanf("%f", &math);
    printf("Lite: ");
    scanf("%f", &lite);
    printf("Average = %.2f", average(math, lite));
    
    
    getch();
    return 0;
}
