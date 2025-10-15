//KR 6th Updated Financial Calculator
#include <stdio.h>

int cost(char*subject){
    float amount;
    printf("What is your monthly %s?\n",subject);
    scanf("%f",&amount);
    return amount;
}
int percent(float sub,float income){
    float percent = (float)sub/income*100;
    return percent;
}
int main(void){

    //printf("What is your income?\n");
    //scanf("%d", &income);
    float income = cost("income");
    float rent = cost("rent");
    float utilities = cost("utilities");
    float groceries = cost("groceries");
    float transport = cost("transportation");

    float savings = income*0.1;

    float rent_perc = percent(rent,income);
    float util_perc = percent(utilities,income);
    float groc_perc = percent(groceries,income);
    float tran_perc = percent(transport,income);
    float save_perc = percent(savings,income);

    printf("your rent is $%1.2f and that is %1.0f of your income.\n", rent,rent_perc);
    printf("your utilites is $%1.2f and that is %1.0f percent of your income.\n", utilities,util_perc);
    printf("your groceries is $%1.2f and that is %1.0f percent of your income.\n", groceries,groc_perc);
    printf("your transport is $%1.2f and that is %1.0f percent of your income.\n", transport,tran_perc);
    printf("you should save %1.2f a month and that is %1.0f percent of your income.\n", savings, save_perc);

    float total = savings+transport+groceries+utilities+rent;
    float spending_money = income-total;
    printf("you have %1.2f of spending money each month!", spending_money);
}