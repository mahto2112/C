#include<stdio.h>
int main(){
    //declaring a integer variable
    int a;
    int b;
    int c;
    int d;
    int e;


    //taking input in variable
    printf("enter first value:");
    scanf("%d",&a);

    printf("enter second value");
    scanf("%d",&b);

    c=a+b;
    d=a*b;

    //printing value of a
    printf("\n sum=");
    printf("%d",c);

    printf("\n product=");
    printf("%d",d);

    e=a-b;
    printf("\n subtract=");
    printf("%d",e);
}

