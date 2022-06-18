#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char name[20];
printf("What's your name");
fgets(name, 20, stdin);
printf("your name is %s, welcome \a", name);
printf("%c%c%c \n", '\a', '\a', '\a');

return 0;
}