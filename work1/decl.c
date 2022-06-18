#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 5, b =7, c = 6;
    double average;

    printf("a is %d, b is %d, c is %d \n", a,b,c);

    average = (a + b + c) / 3.0;
    printf("The average of the 3 number is %lf \n", average);
}