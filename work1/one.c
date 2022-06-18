#include <stdio.h>

#define PI 3.1450;

int main(void)
{
    double area = 0.0, radius = 0.0;
    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);
    // area = PI * radius 8 raadius; Geberate an error
    area = radius * radius * PI;
    printf("The area of a the circle is %lf \n", area);
    return 0;
}