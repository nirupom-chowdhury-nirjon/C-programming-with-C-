/*Sum of diagonal matrix*/
#include<stdio.h>
int main()
{
    int row,col,a[10][10],sum=0,i,j;
    printf("Enter the row and column of a matirx :  \n ");
    scanf("%d%d",&row,&col);
    printf("Enter Matrix A:  \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix A:  \n");
    for(i=0; i<row; i++)
    {

        for(j=0; j<col; j++)
        {
             printf("\t");
            printf("%d ",a[i][j]);
        }
    printf("\n");
}
for(i=0; i<row; i++)
    {

        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("The diagonal of sum is : %d \n",sum);
    getch();


}
