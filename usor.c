#include <stdio.h>
#include <stdlib.h>

int main()
{
    int usernum;
    printf("Please enter a number: ");
    scanf("%d", &usernum);
    int a = 34, b = 67;
    if ((b || a) > usernum) 
    {
        printf("There is a greater number \n");
    } else { printf("The is no greater number \n");}

    
    return 0;
}