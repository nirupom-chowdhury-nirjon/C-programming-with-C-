#include<stdio.h>
int main()
{
    FILE *file;
    int num,marks,i;
    char name[20];
    file=fopen("student2.txt","a");
    if(file==NULL)
    {
        printf("File does not exit");
    }
    else
    {
        printf("File is opened\n");
        printf("Number of students :  ");
        scanf("%d",&num);
        for(i=0;i<=num;i++)
        {
            printf("Enter your Name:  \n");
            scanf("%s",&name);
            printf("Enter your marks:  ");
            scanf("%d",&marks);
            fprintf(file,"\n%s\t\t\t%d\n",name,marks);
        }
        fclose(file);


    }

}
