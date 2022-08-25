/* write a c program to transpose of a matrix*/
#include<stdio.h>
int main()
{
    int mat_1[10][10],mat_2[10][10],row,col,i,j;
    printf("Enter the row and column of a matrix ");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of a matrix1: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat_1[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d\t",mat_1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            mat_2[i][j]=mat_1[i][j];
        }
    }
    printf("The transpose matrix is :\n ");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t%d\t",mat_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}






