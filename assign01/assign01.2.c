#include<stdio.h>
int main(){
    float bs,gs,da,hr;

    printf("enter your basic salary");
    scanf("%f",&bs);

    da=bs*40/100;
    hr=bs*20/100;

    gs=bs+da+hr;

    printf("gross salary %f",gs);



}
