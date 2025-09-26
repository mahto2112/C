#include<stdio.h>
int main(){
    int hrs,min ,tms;

    printf("enter your hrs");
    scanf("%d",&hrs);

    printf("enter your minutes");
    scanf("%d",&min);

    tms=(hrs*60)+min;

    printf("total minutes: %d",tms );



}
