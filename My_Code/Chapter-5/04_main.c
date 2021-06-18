#include <stdio.h>

int suma(int a, int b);

int main()

{
    int c,d;
    printf("First number: ");
    scanf("%d", &c);
    
    printf("Second number: ");
    scanf("%d", &d);

    suma(c,d);

    return 0;
}

int suma(int a, int b){
    return printf("The sum of %d and %d is %d\n", a,b,a+b);
}