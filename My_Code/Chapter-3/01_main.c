// c programm to thach weather a number is odd or even
# include<stdio.h>


int main(){

    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    // printf("Enter the second number");
    // scanf("%d", &b);

    if (a%2 == 0){
        printf("%d is a even number\n", a);
    }
    else {
        printf("%d is a odd number\n", a);
    };
    return 0;

}