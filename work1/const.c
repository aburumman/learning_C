#include <stdio.h>
#include <stdlib.h>

#define ID 20;

int main(void)
{
    const int mynum = 45;
    int num = 8;
    printf(" num is %d \n", num + mynum);
    num = 5;
    printf(" num is %d \n", num);
}