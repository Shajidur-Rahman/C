#include <stdio.h>

int ava(int a, int b, int c);

int main()

{
    int result;
    result = ava(2,2,2);
    printf("The avarage is %d\n", result);
    return 0;
}

int ava(int a, int b, int c){
    return ((a+b+c)/3);
}