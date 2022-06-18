#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double num1;
    double num2;
    char option;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operation -  +  /  x  : ");
    scanf(" %c", &option);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (option == '+')
    {  printf("%lf + %lf is %lf \n", num1, num2, (num1 + num2)); }
    else if (option == '-')
    {  printf("%lf - %lf is %lf \n", num1, num2, (num1 - num2)); }
    else if (option == 'X')
    {   printf("%lf x %lf is %lf \n", num1, num2, (num1 * num2));  }
    else if (option == '/')
    {  printf("%lf / %lf is %lf \n", num1, num2, (num1 / num2));  }
    else
    {printf("You entered a wrong operation");}

    return 0;
}