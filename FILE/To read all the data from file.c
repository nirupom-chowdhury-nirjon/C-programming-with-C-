#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("student.txt","r");

    if(file==NULL)
    {
        printf("File does not exist ");
        exit(1);
    }
    else
    {
        printf("File is opened\n ");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);

        }
        fclose(file);

    }
}
