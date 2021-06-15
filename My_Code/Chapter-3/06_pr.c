# include<stdio.h>


int main(){

    float fir,sec,thi, res;
    printf("The number of the first subject: ");
    scanf("%f", &fir);
    printf("The number of the seocnd subject: ");
    scanf("%f", &sec);
    printf("The number of the third subject: ");
    scanf("%f", &thi);

    res = ((fir+sec+thi )*100)/300;


    if(res < 30){
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }
    

    return 0;

}