#include <stdio.h>

int a, b;

void sum(void)
{
    extern int a, b;
    a = 91; b = 14;
    printf("a is %d and b is %d which sums up to %d", a,b, a+b);
}

int main(void)
{
    extern int a, b;
    sum();
    printf("The sum of a and b is %d", a+b);
}

// Amajourista