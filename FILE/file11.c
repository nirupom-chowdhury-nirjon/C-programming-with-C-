#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("Test3.txt","r");
    if(file==NULL)
    {
        printf("File does not exist ");
    }
    else
    {
        printf("Fiie is opened\n");
       while(!feof(file))
       {
           ch=getc(file);
           printf("%c",ch);
       }
       fclose(file);
    }
}
