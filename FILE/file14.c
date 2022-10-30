#include <stdio.h>
int main()
{
char name[50];
int marks, i, num;
printf("Enter number of students: ");
scanf("%d", &num);
FILE *fptr;
fptr = (fopen("test3.txt", "r"));
if(fptr == NULL)
{
printf("Error!");
exit(1);
}
fprintf(stdout,"Name \t\tMarks \n");
for(i = 0; i < num;i++)
{
fscanf(fptr,"%s %d",&name,&marks);
printf("%s \t%4d\n",name,marks);
}
fclose(fptr);
return 0;
}
