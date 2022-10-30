##include<stdio.h>
int main()
{
    FILE *file;
    int i,age;
    char name[30]="Nirupom Chowdhury";
    file=fopen("Test3.txt","w");
    if(file==NULL)
    {
        printf("File does not exist ");
    }
    else
    {
        printf("Fiie is opened\n");
