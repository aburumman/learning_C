#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    if (puts("Hello Wolrd!") == EOF)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}