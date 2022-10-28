 /* Find the sum,substract,multiplication,division  of two numbers */
    #include<stdio.h>
    int main()
    {
    int number1,number2;
    int sum,substract,multiplication;
    float division;
    printf("Enter the numbers 1&2:");
    scanf("%d%d",&number1,&number2);

    sum=number1+number2;
    substract=number1-number2;
    multiplication=number1*number2;
    division=number1/number2;

    printf("sum of %d+%d=%d\n",number1,number2,sum);
    printf("substract of %d-%d=%d\n",number1,number2,substract);
    printf("multiplication of %d*%d=%d\n",number1,number2,multiplication);
    printf("division of %d/ %d=%f\n",number1,number2,division);

    return 0;
    }


