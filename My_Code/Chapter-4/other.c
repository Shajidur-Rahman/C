#include <stdio.h>

int main()
{

    int a = 34, prime = 0;

    for (int i = 0; i < a; i++)
    {
        if (a % i == 0)
        {
            prime = 1;
            break;
        }
    }

    if (prime)
    {
        printf("It is a prime number\n");
    }
    else
    {
        printf("It is not a prime number\n");
    }

    return 0;
}
