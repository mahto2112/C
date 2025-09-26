#include<stdio.h>
int main(){
    int sp,cp,tp,tcp;

    printf("selling price");
    scanf("%d",&sp);

    printf("profit price");
    scanf("%d",&tp);

    tcp=sp-tp;
    cp=tcp/15;

    printf("total cost price %d \n",tcp);
    printf("cost price of one item %d \n",cp);






}
