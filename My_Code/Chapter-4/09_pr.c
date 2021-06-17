# include<stdio.h>


int main(){

    int a;
    printf("The number: ");
    scanf("%d", &a);

    for (int i=10; i >= 1; i--){
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;

}