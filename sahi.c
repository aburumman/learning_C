#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[])
{
    printf("Hello %s \n", name);
}

int main(void)
{
    sayHi("Mike");
    return 0;
}
