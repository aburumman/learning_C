#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 5, b = 7 ;
    int c; 

    c = (a < b)? a:b ;
    printf("C is %i", c);
}