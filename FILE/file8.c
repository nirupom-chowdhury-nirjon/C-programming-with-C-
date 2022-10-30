#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phone,num,i;
    file=fopen("student.txt","a");
    if(file==NULL)
    {
        printf("The file does not exist");
    }
    else
    {
        printf("File is opened\n ");
        printf("Enter numbers of students : ");
        scanf("%d",&num);
        for(i=0;i<=num;i++)
        {
            printf("Enter your name: ");
            scanf("%s",name);

            printf("Enter your age : \n ");
            scanf("%d",&age);
            printf("Enter your phone number : \n");
            scanf("%d",&phone);
            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phone);
        }
        fclose(file);
    }

}
