#include <stdio.h>

int main()
{

    float redious, pi = 3.14;
    printf("Give me the redious of a circal that you want to calculate: \n");
    scanf("%f", &redious);
    printf("The area of the circal is %f\n", redious * redious * pi);
    return 0;
}