// KR 6th Expressions Notes
#include <stdio.h>
#include <math.h>

int main(void){
    //the difference between an integer and a float is, integer is a whole number while floats are decimals
    int year = 2025; //Whole numbers
    float pi = 3.14; //decimals.
    double long_pi = 3.14159265359; //decimals that are 2x as long
    
    printf("8/3 = %f\n", (float)8/3);
    printf("8/3 = %1.2f\n", (float)8/3);
    printf("2 ^ 4 = %1.0f\n", pow(2, 4));

    printf("%f", 2.4+5);

    year += 1;
    year ++;

    //C handles integer divison and float division the exact same way, even if the answer is a float, it will only return integers
        //float division in C requires that one number is a float
    // What are the arithmatic operators
        //+ = addition
        //- = subtraction
        // / = division 
        //* = multiplication
        // % = modulo/remainder <this is the modulo operator, it is used to check remainder
    // in order to get exponents you have to include the math library <math.h> 
        //pow(x,y)
    //tpe casting is when you change a data type. 
        //put the data type in parenthases in front of the equation ex(line 11)
    //compnd assignment operators work by adding one to each variable
        //example line ++;
    //How to round put after the parenthasess, how much you want infront of the decimal and how much after.
        //example (line 12)
    //when you mix a integer and a float operator in C, it will always be a float
    return 0;
}