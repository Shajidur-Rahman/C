# include<stdio.h>


int main(){

    int c;
    printf("The value of a: ");
    scanf("%d", &c);

    for(int a = c; a; a--){
        printf("The value: %d\n", a);
    }
    return 0;

}