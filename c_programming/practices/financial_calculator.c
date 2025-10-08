//KR 6th Financial Calculator
#include <stdio.h>

int main(void){
    float income;
    float rent;
    float utilities;
    float groceries;
    float transport; 

    printf("What is your income?\n");
    scanf("%1.0f", &income);
    while(getfloat() != '\n')
    printf("What is your monthly rent?\n");
    scanf("%1.0f", &rent);
    printf("What is your monthly utilities cost?\n");
    scanf("%1.0f", &utilities);
    printf("What is your monthly groceries cost?\n");
    scanf("%1.0f", &groceries);
    printf("What is your monthly transport cost?\n");
    scanf("%1.0f", &transport);

    int rent_percent = rent/income*100;
    int utilities_percent = utilities/income*100;
    int groceries_percent = groceries/income*100;
    int transport_percent = transport/income*100;


    printf("your rent is %f and that is %d percent of your income.", rent, rent_percent);
    printf("your rent is %f and that is %d percent of your income.", utilities, utilities_percent);
    printf("your rent is %f and that is %d percent of your income.", groceries, groceries_percent);
    printf("your rent is %f and that is %d percent of your income.", transport, transport_percent);

    return 0;
}