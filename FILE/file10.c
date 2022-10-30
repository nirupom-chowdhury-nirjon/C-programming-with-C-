#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int i,marks,num;
    printf("Enter numbers of a students : ");
    scanf("%d",&num);
    file=fopen("student2.txt","r");
    if(file==NULL)
    {
        printf("File does not exist  ");
    }
    else
    {
        printf("File is opened \n");
        fprintf(file,"Name\t\t\tMarks\n");
        for(i=0;i<=num;i++)
        {
            fscanf(file,"%s %d",&name,&marks);
            printf("%s\t\t\t%d\n",name,marks);
        }
        fclose(file);
    }
    return 0;


}
