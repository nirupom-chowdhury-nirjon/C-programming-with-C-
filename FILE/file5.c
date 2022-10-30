#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("test2.txt","r");
    if(file==NULL)
    {
        printf("File does not EXIST  ");
    }
    else
    {
        printf("Fie is opened \n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
    getch();
}
