#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int num, a = 4, ask, final = 0;
    srand(time(0));
    num = rand() % 20;
    printf("Thanks for chossing the game\n");
    printf("You have 3 chance to chose the number\n");

    // main part 
    while (a >= 0)
    {
        printf("Exit in %d\n", a);
        printf("Enter the number: ");
        scanf("%d", &ask);
        if (ask == num){
            printf("You won :)\n");
            final = 1;
            break;
        }
        else{
            printf("Try again :(\n");
        }


        a--;
    }
    
    if (final == 0){
        printf("The number was %d\n", num);
    }

    return 0;
}