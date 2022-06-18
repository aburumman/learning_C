#include <stdio.h>

int main(void)
{
    float a = 7.8;
    int b = 5;
    double t = 45.00;
printf("a is %f, b is %i, t is %lf \n", a,b,t);

double c = (double) b;
float e = (float) t;
int f = (int) a;

printf(" c is : %lf, e is %f, f is %i \n", c,e,f);
}