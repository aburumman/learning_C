#include <stdio.h>

int main(void)
{
    for(int i; i < 10; i++)
    {
        for ( int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}