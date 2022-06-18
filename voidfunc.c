#include <stdio.h>
#include <stdlib.h>

void func();
static int c = 5;

int main(void)
{
while (c--)
{
func();
}
return 0;
}

void func()
{
    static int i = 5;
    i++;
    printf("i is %d, and c is %d \n", i, c);

}