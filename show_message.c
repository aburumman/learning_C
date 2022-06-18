#include <stdio.h>
#include <stdlib.h>

void show_message(void);

int main()
{
    int count;
    count = 0;

    while (count < 10)
    {
        show_message();
        count = count + 1;
    }
    return 0;
}

void show_message(void)
{
    printf("Hello \n");
}