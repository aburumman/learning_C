#include <stdio.h>
#include <stdlib.h>

int max2();

int main(void)
{
    int a=23, b = 100, c = 1.5;
printf("the largest of %d , %d and %d is %d \n", a, b, c, max2(a, b, c));
return 0;
}

int max2(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {result = num1;} 
    else if (num2 >= num1 && num2 >= num3)
    { result = num2;} 
    else { result = num3; }
    return result;
}