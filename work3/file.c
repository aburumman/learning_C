#include <stdio.h>

int main(void)
{
    int a, x;
    char b;
    int c[9];
    double d;
    float e;
    long int f;
    long long int g;

    printf("Tpe a psitive value: ");
    scanf("%d", &a);
    for (int x = 0; x < a; x++)
    {
        printf("I most do this %d\n", a);
        if (x == 10)
        break;
    }

}