#include<stdio.h>
int main()
{
    int number=987,reverse=0,sum=0;


    while(number!=0)
    {
        reverse=reverse*10;
        reverse=reverse+number%10;
        number=number/10;

    }
    printf("Enter the reverse of a number is %d",reverse);
}
