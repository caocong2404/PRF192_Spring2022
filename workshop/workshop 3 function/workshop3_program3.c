#include <stdio.h>

int getRelPos(double x, double y, double r){
    double d2 = x*x + y*y ;      //x^2 + y^2
    double r2 = r*r;            //r^2
    if ( d2 < r2) return 1;    //d^2 < r^2 
       else if ( d2 == r2) return 0;
       return -1;
}
int main(){
    double x, y;
    double r;
    
    printf("The center is (x,y)\n");
    printf("Input x: ");
    scanf("%lf", &x);
    printf("Input y: ");
    scanf("%lf", &y);
    do
    {
      printf("Input radius: ");
      scanf("%lf", &r);
    } while (r < 0);
           if (getRelPos( x, y, r) ==1) printf("The point is in the circle");
              else if (getRelPos( x, y, r)==0) printf("The point is on the circle");
                   else printf("The point is out of the circle");
                   
    getch();
    return 0;
}
