#include <stdio.h>
int main()
{
    double a,b;
    char n;
    printf("*********************WELCOME--TO--THE--CLACULATOR***********************\n");
    printf("Enter Operator (+ , - , * , /) : ");
    scanf("%c",&n);
    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);

    switch (n)
    {
    case '+':
        printf("The addition of numbers is: %lf",(a+b));
        break;
    case '-':
        printf("The Subtraction of two numbers is: %lf",(a-b));
        break;
    case '*':
        printf("The product of two numbers is: %lf",(a*b));
        break;
    case '/':
        printf("The division of two numbers is: %lf", (a/b));
        break;
    default:
        printf("ERROR!! - No operator Found.");
        break;
    }
    printf("\n****************************THANKS--FOR--USING**************************\n");
    return 0;
}