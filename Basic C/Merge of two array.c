/* merge the two array */
#include<stdio.h>
int main()
{
    int array[10],array2[10],merge[20],size1,size2,i,k;
    printf("Enter Array 1 size:  ");
    scanf("%d",&size1);
    printf("Enter Array 1 :  ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&array[i]);
        merge[i]=array[i];
    }
    k=i;
    printf("\nEnter Array 2 size:  ");
    scanf("%d",&size2);
    printf("Enter Array 2 :  ");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&array2[i]);
        merge[k]=array2[i];
        k++;

    }
    printf("The new array is after merging:   ");
    for(i=0;i<k;i++)
    {
        printf("%d\t",merge[i]);
    }

}
