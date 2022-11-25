/*Find the value of  the variable using pointer */
#include<stdio.h>
int prod(int m,int n);
int main()
{
    int x=10;
    int y=20;
    int p,q;
    p=prod(x,y);
    q=prod(p,prod(x,y));
    printf("P= %d \n Q= %d\n",p,q);
}
int prod(int a,int b)
{
    return (a*b);
}
