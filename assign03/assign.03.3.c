#include<stdio.h>
int main(){
    int x,y;


    printf("enter your values");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0){
        printf("Is Quadrant 1");
    }
    else if(x<0 && y>0){
            printf("Is Quadrant 2");

    }
    else if(x<0 && y<0){
        printf("Quadrant 3");
    }
    else if(x>0 && y<0){
        printf("Quadrant 4");
    }
    else if(x==0 && y==0){
        printf("origin");
    }




}
