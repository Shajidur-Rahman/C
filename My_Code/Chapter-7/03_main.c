#include <stdio.h>

int main()

{
    int marks[5];

    for (int i=0; i < 5; i++){
        printf("The mark of the student- %d ", i+1);
        scanf("%d", &marks[i]);
    }
    printf("The marks that you entered are %d %d %d %d\n", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}