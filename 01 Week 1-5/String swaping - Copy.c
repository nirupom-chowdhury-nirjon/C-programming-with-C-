#include<stdio.h>
int main()
{
    char str1[100]="Nirupom Chowdhury Nirjon ";
    char str2[100]="Lionel Messi";
    char temp[100];

    printf("Before Swapping \n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\n\n After Swapping \n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);











}
