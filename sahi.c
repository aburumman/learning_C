#include <stdio.h>
#include <stdlib.h>

void sayHi();

int main(void)
{
    sayHi("Mike");
    return 0;
}

void sayHi(char name[])
{
    printf("Hello %s \n", name);
}