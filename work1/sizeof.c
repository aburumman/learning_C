#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6;
    double mydouble = 45.90;
    char mychar = 'e';

    printf("The size of Int A is %lu bytes \n", sizeof(a));
    printf("The size of Int B is %lu \n", sizeof(b));
    printf("The size of Int c is %lu \n", sizeof(c));
    printf("The size of Int mydouble is %lu \n", sizeof(mydouble));
}