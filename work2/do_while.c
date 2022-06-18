#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        printf("Choose a number: ");
        scanf("%d", &num);
    } while (num < 10 || num != 20);

    {
        /* code */
    }
    
}