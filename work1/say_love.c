#include <stdio.h>

int main(void)
{
    int repeat;
    printf("How much do you love 1 -10: ");
    scanf("%d", &repeat);
    printf("I love you very");
    while(repeat > 0)
    {
        printf("\n very ");
        repeat--;
    }
    printf("much. \n\n");
    return (0);
}