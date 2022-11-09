/*to find a factorial of two numbers*/
#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("Enter N= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of a number is :  %d",fact);
}
