#include <stdio.h>

int main() {
    float a, b, c ;
    printf("We are going to add to numbers together \n");
    printf("Please Enter 2 Numbers");
    scanf("%f, %f", &a, &b);
    c = a + b; 
    printf("The sum of Number %f and Number %f, is %f", a,b,c);
    return 0;

}