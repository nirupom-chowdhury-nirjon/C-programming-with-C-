/*Multiplication of matrix */
#include<stdio.h>
int main()
{
    int row1,col1,row2,col2, i,j,k,a[10][10],b[10][10],c[10][10],sum=0;
    printf("Enter the row1 and col1  of a matrix :  ");
    scanf("%d%d",&row1,&col1);
    printf("Enter the row2 and col2  of a matrix :  ");
    scanf("%d%d",&row2,&col2);
    while (col1!=row2)
    {
        printf("Sorry ! Multiplication cannot be possible . Please try again ..\n\n");
        printf("Enter the row1 and col1  of a matrix :  ");
    scanf("%d%d",&row1,&col1);
    printf("Enter the row2 and col2  of a matrix :  ");
    scanf("%d%d",&row2,&col2);
    }
    printf("Enter Matrix A:  \n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Matrix B:  \n");
    for(i=0; i<row2; i++)
    {

        for(j=0; j<col2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix A:  \n");
    for(i=0; i<row1; i++)
    {

        for(j=0; j<col1; j++)
        {
             printf("\t");
            printf("%d ",a[i][j]);
        }
    printf("\n");
}
printf(" \nMatrix B:  \n");
for(i=0; i<row2; i++)
{

    for(j=0; j<col2; j++)
    {
         printf("\t");
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
// Multiplication of two matrix
for(i=0;i<row1;i++)
{
    for(j=0;j<col2;j++)
    {
        for(k=0;k<col1;k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        sum=0;
    }
}
printf("Resulting matrix:  \n");
for(i=0;i<row1;i++)
{
    for(j=0;j<col2;j++)
    {
        printf("\t");
        printf("%d ",c[i][j]);
    }
    printf("\n");
}

}









































