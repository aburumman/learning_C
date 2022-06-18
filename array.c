#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int luckyNumbers[] = {4,8,10,12,14,16,18,20};
int Numbers[100];
Numbers[0] = 45;
printf("Luck Number is: %d  \n", luckyNumbers[5]);
luckyNumbers[5] = 234; 
printf("%d \n", luckyNumbers[5] + Numbers[0]);
return 0;
}