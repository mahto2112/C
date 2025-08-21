#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter the sides of tringle");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b&& b==c){
        printf("equilatoral");
    }
    else if(a==b|| b==c|| a==c){
        printf("isoscale");
    }
    else{
        printf("scalene");
    }












}
