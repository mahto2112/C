#include<stdio.h>
int main(){
    int a,b,c,d,e,tm,per;

    printf("enter your marks");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


    tm=a+b+c+d+e;

    printf("\n total marks %d",tm);

    per=(tm*100)/500;

    printf("\n percentage %d",per);









}
