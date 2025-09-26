#include<stdio.h>
int main(){
    int y;

    printf("Enter your year");
    scanf("%d",&y);

    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                printf("Is a leap year");

            }
            else{
                printf("Is not a leap year");
            }
        }
        else{
            printf("Is a leap year");
        }
    }
    else{
        printf("Is not a leap year");
    }



}
