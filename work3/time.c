#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;
    time(&now);
    printf("%s", ctime(&now));
}