/*Array sorting by decanding order */
#include<stdio.h>
int main()
{
    int array[100],n,i,a,j;
    printf("Enter the value of N= ");
    scanf("%d",&n);
    printf("Enter A:  \n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]<array[j])
            {
                a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    printf("The number of desanding order:  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
