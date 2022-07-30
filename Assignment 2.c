/*write a c program to input basic salary of an employee and calculate its gross salary */
#include<stdio.h>
int main()
{

int basic;
float HRA,medical,Gross;
printf("Enter the basic salary:\t");
scanf("%d",&basic);

if(basic <=23000 )
{
    HRA=basic*.55;
    medical=basic* 0.08;
}
else if(basic <= 35000 )
{
    HRA= basic*0.4;
    medical=basic*0.08;
}
else if(basic > 35000)
{
    HRA=basic*0.35;
    medical=basic*
    0.08;
}
Gross = basic + HRA + medical;
printf("GROSS SALARY OF ENPLOYEE IS=%.2f",Gross);
return 0;


}
