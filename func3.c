#include <stdio.h>
#include <stdlib.h>

double cube();

int main(void)
{
//int mynum = 9;
double usernum;
printf("Please input a number to cube \n");
scanf("%lf", &usernum);
printf(" the cube of %lf is %lf \n", usernum, cube(usernum));
return 0;
}

double cube(double num)
{
    return num * num * num;
}