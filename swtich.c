#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char grade = 'A';
   // printf("What is your grade: ");
    //scanf(" %c", grade);

    switch (grade)
    {
    case 'A':
        printf("Great performance");
        break;
    case 'B':
    printf("A good performance");
    break;
    case 'C':
    printf("A fair performance");
    break;
    case 'D':
    printf("A poort performance");
    break;
    case 'E':
    printf("Very poor performance");
    case 'F':
    printf("You failed wooefully");
    break;
    default:
    printf("I don't know how to classify that");
        break;
    }
    return 0;
}