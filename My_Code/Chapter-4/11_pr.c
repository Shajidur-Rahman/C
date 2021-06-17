# include<stdio.h>


int main(){

    int a = 23;
    
    for (int i=2;i<45; i++){
        if (a%i ==0){
            printf("It is not a prime number\n");
            break;
        }
        else
        {
            printf("It is a prime number\n");
            break;
        }
        
    }

    return 0;

}