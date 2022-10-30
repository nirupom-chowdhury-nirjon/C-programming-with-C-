#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber;
    int number,i;

    file=fopen("student.txt","a");
    if(file==NULL)
    {
        printf("File does not exist ");
    }
    else
    {
        printf("file is opened \n");
        printf("Enter number of students : \n");
        scanf("%d",&number);
        for(i=1;i<=number;i++)
        {
            printf("Enter student name: \n");
            scanf("%s",name);
            printf("Enter Age : \n");
            scanf("%d",&age);
            printf("Enter Phone Number : \n");
            scanf("%d",&phoneNumber);
            fprintf(file,"%s\t\t%d\t\t%d\t\t",name,age,phoneNumber);
            fclose(file);
        }
    }
}
