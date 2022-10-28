/*To cheak prime number or not*/
#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {

    if(n%i==0)
    {
        printf("The number is not prime number : \n");
        flag=1;
        break;

    }
    }
    if(flag==0)
    {
        printf("The number is prime number : ");
    }
}
