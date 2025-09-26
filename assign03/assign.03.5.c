#include<stdio.h>
int main(){
    int mth,phy,chem,tm,tmp;

    printf("enter your marks");
    scanf("%d%d%d",&mth,&phy,&chem);

    tm=mth+phy+chem;

    tmp=mth+phy;

    printf("total marks in math,physics,chemistry %d",tm);
    printf("\n total marks in math and physics %d",tmp);



    if(tm>=190||tmp>=140){
        printf("\n eligible for admission");
    }

    else{
        printf("\n not eligible for admission");
    }







}
