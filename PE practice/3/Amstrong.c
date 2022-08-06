// armstrong
 
#include <stdio.h>
#include <math.h>
 
int countDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
 
int isArmstrong(int num)
{
    int numDigit = countDigits(num);
    int tmp = num;
    int sum = 0;
    int last;
    while (tmp > 0)
    {
        last = tmp % 10;
        tmp /= 10;
        sum += pow(last, numDigit);
    }
    if (sum == num)
        return 1;
    return 0;
}
 
int main()
{
    int num;
    printf("input number: ");
    scanf("%d", &num);
 
    if (isArmstrong(num) == 1)
    {
        printf("%d is Armstrong number.", num);
    }
    else
    {
        printf("%d is not Armstrong number.", num);
    }
    //getch();
}

