//KR 6th Time Of Day
#include <stdio.h>

int main(void){
    int time;

    printf("What is the hour in military time:\n");
    scanf("%d",&time);

    if(time <= 24 && time >= 18){
        printf("Good evening!\n");
    }else if(time >= 12 && time <= 17){
        printf("Good afternoon!\n");
    }else if(time >= 0 && time <= 11){
        printf("Good Morning!\n");
    }else{
        printf("That is not a time in military time.");
    }

    return 0;
}