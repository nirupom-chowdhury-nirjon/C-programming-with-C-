/*Find the number of vowel and consonant of a string*/
#include<stdio.h>
int main()
{
    char str[20];
    int i=0,vowel=0,consonent=0;
    char ch;
    printf("Enter string:: \n");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e'||ch=='i'||ch=='o' ||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
            consonent++;
        i++;

    }
    printf("The number of vowel is : %d\n",vowel);
    printf("\nThe number of consonent is : %d",consonent);
}
