#include <stdio.h>

char *name(void)
{
    static char author[] = "Dan Gookin";

    return author;
}

int main()
{
    printf("The authhors name is %s", name());
    printf("\n");
}