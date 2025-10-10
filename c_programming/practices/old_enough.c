//KR 6th Old Enough
#include <stdio.h>
#include <strings.h>

int main(void){
    //vote=18, drive=16, learners=15,school=6
    int age;

    printf("What is your age:\n");
    scanf("%d",&age);

    if(age >= 130){
        printf("You are dead...\n");
    }else if(age >= 18){
        printf("You are old enough to vote\n");
    }else if(age >= 16){
        printf("You are old enough to drive\n");
    }else if(age >= 15){
        printf("You are old enough to get a drivers license\n");
    }else if(age >= 4){
        printf("You are old enough to go to school\n");
    }else{
        printf("You are too young\n");
    }

    return 0;
}