#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int luckyNumbers[] = {1,2,3,4,5,6,7,8,9,0};
    //char myName[10];

    //myName = "Mustapha";
    printf("%d \n", luckyNumbers[0]);

    int nextnum[10];
    nextnum[0] = 78;
    nextnum[1] = 23;
    printf("%d and %d are is an array \n", nextnum[-1], nextnum[0]);
    //printf("The first letter of my name is %d and the l ast letter is %d", myName[0], myName[7]);
    return 0;
}