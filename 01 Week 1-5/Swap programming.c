#include<stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter The value of a is:\n");
    scanf("%d", &a);

    printf("Enter The value of b is:\n");
    scanf("%d", &b);

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    temp=a;
    a=b;
    b=temp;

    printf("The swap value of a is %d\n",a);
    printf("The swap value of b is %d\n", b);

    return 0;
}
