/*string palindrome or not cheak*/
#include<stdio.h>
int main()
{
    char str[20]="Nirupom ";
    char str2[30];
    int i;
    strcpy(str2,str);
   strrev(str2);
   printf("Reverse of the string : %s\n",str2);
   int d=strcmp(str2,str);
   if(d==0)
   {
       printf("String are palindrome. \n");
   }
   {
       printf("String are not palindrome .\n");
   }
}
