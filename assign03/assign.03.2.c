#include<stdio.h>
int main(){
    int m;
    int n;


    printf("Enter a number");
    scanf("%d",&m);

    if(m>0){
        //printf("n is 1");
        n = 1;

    }
    else if(m==0){
        //printf("n is 0");
        n=0;
    }
    else if(m<0){
        //printf("n is -1");
        n=-1;

    }
    printf("%d",n);








}
