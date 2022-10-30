#include<stdio.h>
int main()
{

    FILE *file;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("The file does not exist ");
    }
    else
    {
        printf("The is created ");
        fclose(file);
    }



}
