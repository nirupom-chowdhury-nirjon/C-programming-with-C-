#include<stdio.h>
int main()
{
    FILE *file;
    char fname[20];
    char lname[20];
    int age;

    file=fopen("test2.txt","r");
    if(file==NULL)
    {
        printf("File does not exist ");
    }
    else
    {
        printf("File is opened \n");
        fscanf(file,"%s\t%s\t%d",&fname,&lname,&age);
        printf("Name= %s\t%s\t%d\n",fname,lname,age);



        fclose(file);


    }
}
