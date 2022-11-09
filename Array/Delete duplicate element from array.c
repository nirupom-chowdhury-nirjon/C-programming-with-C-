/*Delete duplicate element from array*/
#include<stdio.h>
int main()
{
    int array[20],i,j,k,n;
    printf("Enter N=  ");
    scanf("%d",&n);
    printf("Array 1:  \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                for(k=j;k<n;k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                //j--;
            }

        }


    }
    printf("After duplicationg element array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

}
