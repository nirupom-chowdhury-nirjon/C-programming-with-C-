#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a\t");
    scanf("%d",&a);
    printf("Enter the value of b\t");
    scanf("%d",&b);
    printf("Enter the value of c\t");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is large number");
    }
    else if(b>a && b>c)
    {
        printf("b is large number");
    }
    else
    {
        printf("c is large number");
    }
    return 0;
}
