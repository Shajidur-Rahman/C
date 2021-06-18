#include <stdio.h>

int suma(int a, int b);

int main()

{
    int c;
    c = suma(2,3);
    printf("The sum of a and b is %d\n", c);
    return 0;
}

int suma(int a, int b){
    int result = a + b;
    return result;
}