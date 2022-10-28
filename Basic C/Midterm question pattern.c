#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter N=  ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
         for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("  %d",j);
        }
        printf("\n");
    }
    return 0;

}
