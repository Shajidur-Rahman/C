// # include<stdio.h>


// int main(){

//     float principal = 100, rate = 4, years = 1;
//     float simple;
//     simple = (rate*years*principal)/100;
//     printf("my interest %f\n", simple);
//     return 0;

// }


# include<stdio.h>


int main(){

    float pri, rat, yea;
    printf("The principle: ");
    scanf("%F", &pri);
    printf("The rate: ");
    scanf("%F", &rat);
    printf("The year: ");
    scanf("%f", &yea);
    float smaple = (pri * rat * yea)/100;
    printf("The interest is %f\n", smaple);
    return 0;

}