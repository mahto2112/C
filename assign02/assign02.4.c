#include<stdio.h>
int main(){
    int hrs;
    int mins;
    int totalhrs;
    int totalmins;

    printf("Enter your mins");
    scanf("%d",&mins);

    totalhrs=mins/60;
    totalmins=mins%60;

    printf("total hrs: %d", totalhrs);
    printf("total mins: %d",totalmins);
}
