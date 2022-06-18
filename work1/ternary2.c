#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int speed;
    printf("\n Enter your speed as an Integer: ");
    scanf("%d", &speed);
    speed = (speed <= 65)? (65):(speed <= 70 )? (70): (90);
    switch(speed){
        case 65: printf("\n No speeding ticket \n\n"); break;
        case 70: printf("\nSpeeding Ticket"); break;
        default: printf("\n I dont know");
    }



}



#include <stdio.h>
/**
 * main - Returns the state of N
 * Description: Return if N is positive or negative
 * Return: (0)
*/
