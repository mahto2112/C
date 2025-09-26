#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter your numbers");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c){
        printf("the largest number is %d",a);
    }
    else if(b>a&&b>c){
        printf("the largest number is %d",b);
    }
    else if(c>a&&c>b){
        printf("the largest number is %d",c);
    }
    else{
        printf("all are same");
    }




}
