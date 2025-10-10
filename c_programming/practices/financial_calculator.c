//KR 6th Financial Calculator
#include <stdio.h>

int main(void){
    int income;
    int rent;
    int utilities;
    int groceries;
    int transport; 

    printf("What is your income?\n");
    scanf("%d", &income);
    //while(getfloat() != '\n')
    printf("What is your monthly rent?\n");
    scanf("%d", &rent);
    printf("What is your monthly utilities cost?\n");
    scanf("%d", &utilities);
    printf("What is your monthly groceries cost?\n");
    scanf("%d", &groceries);
    printf("What is your monthly transport cost?\n");
    scanf("%d", &transport);

    int savings = income*0.1;

    float rent_percent = (float)rent/income*100;
    float utilities_percent = (float)utilities/income*100;
    float groceries_percent = (float)groceries/income*100;
    float transport_percent = (float)transport/income*100;
    float savings_percent = (float)savings/income*100;


    printf("your rent is %d and that is %1.0f percent of your income.\n", rent, rent_percent);
    printf("your utilites is %d and that is %1.0f percent 30of your income.\n", utilities, utilities_percent);
    printf("your groceries is %d and that is %1.0f percent of your income.\n", groceries, groceries_percent);
    printf("your transport is %d and that is %1.0f percent of your income.\n", transport, transport_percent);
    printf("you should save %d a month and that is %1.0f percent of your income.\n", savings, savings_percent);

    int total = savings+transport+groceries+utilities+rent;
    int spending_money = income-total;

    printf("you have %d of spending money each month!", spending_money);

    return 0;
}