#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,multiplication;
    float division;
    printf("Please enter a number:");
    scanf("%d",&num1);
    printf("Please enter another number:");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
    printf("Sum is:%d\n",sum);
    printf("Sub is:%d\n",sub);
    printf("Multiplication is:%d\n",multiplication);
    printf("Division is:%lf\n",division);

    return 0;
}
