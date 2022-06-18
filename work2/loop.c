#include <stdio.h>


int main(void)
{
int size = 10;
int ages[] = {2,45,34,12,78,45,56,54,34,4};
int age_size = sizeof(ages) / sizeof(ages[0]);

for ( int i = 0; i <= age_size; i++)
{
    printf("The index Number %i: is %i \n", i, ages[i]);
}
}

