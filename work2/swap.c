#include <stdio.h>
#include <stdlib.h>



int main(void)
{
int a = 30, b = 50;
int t = a;

a = b;
b = t;

printf("Swaped values a: %i, b: %i \n", a,b);
}

