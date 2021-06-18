#include <stdio.h>

float suma(float a, float b);

int main()

{
    float c,d;
    printf("First number: ");
    scanf("%f", &c);
    
    printf("Second number: ");
    scanf("%f", &d);

    suma(c,d);

    return 0;
}

float suma(float a, float b){
    return printf("The sum of %f and %f is %f\n", a,b,a+b);
}