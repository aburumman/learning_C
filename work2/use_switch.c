#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;

    printf("How old are you: ");
    scanf("%d", &age);
    switch (age) {
        case 10:
        printf("You are a teenager");
        break;
        case 18:
        printf("You are a yong adult \n");
        break;
        case 25:
        printf("You are a full adult \n");
        break;
        default:
        printf("Keep growing everyday pal \n");
        break;
    }
    age >= 18 ? printf("You are a legal adult \n") : printf("You are not yet an adult \n");
}