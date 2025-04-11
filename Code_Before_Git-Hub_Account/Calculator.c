#include<stdio.h>
int main ()
{
    printf("Enter two number :\n");
    double num1, num2;
    scanf("%lf%lf",&num1,&num2);

    printf("Enter an Operator (+,-, *, / :)\n");
    char op;

    scanf("%s",&op);


    switch (op){
        case '+' :
            printf("The sum is : %lf + %lf = %lf",num1, num2,num1 + num2);
            break;
        case '-' :
            printf("The substraction is : %lf - %lf = %lf",num1,num2, num1-num2);
            break;
        case '*' :
            printf("The Multiplication is : %lf * %lf = %lf",num1,num2,num1*num2);
            break;
        case '/' :
            printf("The Divition is : %lf / %lf = %lf",num1,num2,num1/num2);
            break;
        default:
            printf("it is not true");
            break;

    }
}
