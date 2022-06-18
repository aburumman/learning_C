#include <stdio.h>
#include <stdlib.h>

int func();

int main(void)
{
    char t[4] = "Mee";
    // function call
    int i = func();
    printf("100 is %s \n", t);
    return (0);
}

int func()
{
    return 0;
}