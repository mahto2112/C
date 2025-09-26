#include<stdio.h>
int main(){
    float km,m,feet,inch,cm;

    printf("enter km of two cities");
    scanf("%f",&km);

    m=km*1000;
    feet=km*1000*3.28;
    inch=km*1000*3.28*12;
    cm=km*100000;

    printf("\n dis in meter %f",m);
    printf("\n dis in feet %f",feet);
    printf("\n dis in inch %f",inch);
    printf("\n dis in centimeter %f",cm);




}
