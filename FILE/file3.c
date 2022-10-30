#include<stdio.h>
int main()
{
    FILE *file;
    char name[100]="  Biroti das Bindu ";
    int i;
    int length=strlen(name);
    file=fopen("test2.txt","w                                                                              ");

    if(file==NULL)
    {
        printf("The File does not Exit \n");
    }
    else
    {
        printf("The file is opened\n ");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully . ");
        fclose(file);
    }
}
