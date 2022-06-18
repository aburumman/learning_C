#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    const int n = 5;
    int r[n];

srand((unsigned)time(NULL));

    for(int x =0; x < n; x++)
    {
r[x] = rand()%10+1;
printf("%i r[x] \n", r[x]);
    }
    printf("Here are the values of r \n");
    for(int y = 0; y < n; y ++)
    printf("%i in r \n", r[y]);
}