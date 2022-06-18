#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int blanks, digits, total_chars, c;
    for (; (c = getchar()) != EOF; total_chars++)
    {
if (c== ' ')
{
++blanks;
} else if (c >= '0' && c <= '9')
{++digits;}    }
printf("blanks = %d, digits = %d, total_chars = %d \n\n", blanks, digits, total_chars);
return 0;

}