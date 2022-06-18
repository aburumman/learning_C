#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a = 5, b = 7, c = 0, d = 0;
c = a - b;
printf("a is %d, b is %d, c is %d, d is %d \n", a, b, c, d);
c = a / b;
d = b / a;
printf("a = %d, b = %d, c = %d, d = %d \n", a, b, c, d);

a = 1 + a;
c = -a - b;
printf("A is %d", a);
printf("C is %d", c);
}
