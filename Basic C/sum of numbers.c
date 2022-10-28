/*Sum of n numbers */
#include<stdio.h>
int main()
{
    int  i,n,sum=0;
    printf("Enter the numbers you  want to see the sum the numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is: 1+2+3....%d=   %d",n,sum);
    return 0;
}
