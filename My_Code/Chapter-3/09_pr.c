# include<stdio.h>


int main(){

    int a,b,c,d, gr;
    printf("First number: ");
    scanf("%f", &a);
    printf("Second number: ");
    scanf("%f", &b);
    printf("Third number: ");
    scanf("%f", &c);
    printf("Fourth number: ");
    scanf("%f", &d);

    if (a > b){
        if (a > c){
            if(a > d){
                gr = a;
            }
        }

    }

    return 0;

}