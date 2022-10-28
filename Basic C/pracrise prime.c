#include<stdio.h>
int main()
{
    int i,n,flag=0;

    while(1)
    {
        printf("Enter N= ");
        scanf("%d",&n);
        if(n>0)
        {
            for(i=2; i<n; i++)
            {
                if(n%i==0)
                {
                    printf("Case: Not prime \n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("Case :  Prime Number \n");
            }
        }
        else
        {
            break;
        }
    }
}
