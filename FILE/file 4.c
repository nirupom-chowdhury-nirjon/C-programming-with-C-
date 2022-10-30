#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    file=fopen("test2.txt","w");
    if(file==NULL)
    {
        printf("The file does not Exist . ");
    }
    else
    {
        printf("The file is opened \n");
        printf("Enter your full name: ");
        gets(name);
        printf("Enter your Age : \n");
        scanf("%d",&age);
        fprintf(file,"Name= %s ,\n Age= %d\n", name,age);


        printf("File is written successfully ... \n");
        fclose(file);
    }
}
