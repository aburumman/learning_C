#include <stdio.h>
#include <stdlib.h>

int max();

int main() {
max(5,7);
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
     printf("%d is grater than %d", num1, num2 );
    } else if (num2 > num1) {
printf(" %d is greater than %d \n", num2, num1);
    }
    return 0;
}