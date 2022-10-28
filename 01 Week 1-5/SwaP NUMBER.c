/* C program to compute quotient and remainder */
#include<stdio.h>
int main()
{
    int dividend,divisor,quotient;
    float remainder;
    printf("Enter the value of dividend\n");
    scanf("%d",&dividend);
    printf("Enter the value of divisor\n");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    remainder=dividend-(divisor*quotient);
    printf("The value of Quotient is:%d\n",quotient);
    printf("The value of remainder is:%f\n",remainder);
    return 0;
}

