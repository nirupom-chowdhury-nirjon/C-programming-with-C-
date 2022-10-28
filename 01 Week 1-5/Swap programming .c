/*Swap number programming */

#include<stdio.h>

int main()
{
    int a,b,temp;
    a=5;
    b=10;
    printf("The value of a %d\n",a);
    printf("The value of b %d\n",b);

    temp=a;
    a=b;
    b=temp;

    printf("The swap number of a %d\n",a);
    printf("The swap number of b %d\n",b);

    return 0;

}
