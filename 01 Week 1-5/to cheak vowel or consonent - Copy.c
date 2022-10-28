/* write a c program to cheak vowel and consonant*/
#include<stdio.h>
int main()
{
    char str1[100];
    int i,vowel,consonant;
    char ch;
    printf("Enter your string ::");
    gets(str1);
    i=vowel=consonant=0;
    while((ch=str1[i])!='\0')
    {
        if(ch=='a'|| ch=='e'||ch=='i' || ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
        else if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
            i++;

    }

    printf("Total number of vowel is:: %d\n",vowel);
    printf("Total number of consonants is:: %d\n",consonant);
    getch();

}
