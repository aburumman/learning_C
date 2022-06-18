#include <stdio.h>

typedef char name[];
typedef float radius;

int main(void)
{
    radius wert = 34;
name myname = "wert";
    printf("The diameter is %.2f", wert*wert);
    printf("\n and the name is %s", myname);
}