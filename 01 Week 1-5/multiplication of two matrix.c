#include<stdio.h>
int main()
{
    int matrix1[10][10], matrix2[10][10],i,j,row,col;
    printf("Enter the dimension of a matrix is:  ");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix1:  ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        scanf(" %d",&matrix1[i][j]);
        }
    }
    printf("Enter the matrix2: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("  %d",&matrix2[i][j]);
        }
    }
    printf("The multipllication matrix is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        printf("  %d",matrix1[i][j]*matrix2[i][j]);
        }
        printf("\n");
    }
}
