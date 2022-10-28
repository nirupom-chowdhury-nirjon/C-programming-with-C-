#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Up to which number you want to sum:");
    scanf("%d",&i);
    for(n=1;n<=i;n++)
    {
        sum=sum+n;
    }
    printf("The sum is 1 to %d",sum);
    return 0;
}
