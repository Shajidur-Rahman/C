# include<stdio.h>


int main(){

    float amount;
    printf("Enter the amount of your encome: ");
    scanf("%f", &amount);
    
    if(amount > 250000 && amount < 500000){
        printf("tex %f\n", ((amount * 5))/100);
    }
    else if(amount > 500000 && amount < 1000000){
        printf("tex %f\n", ((amount * 20))/100);
    }
    else if(amount > 1000000){
        printf("tex %f\n", ((amount * 30))/100);
    }
    return 0;

}