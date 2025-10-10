//KR 6th Conditionals notes
#include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    char name[50];
    printf("what is your grade? ");
    scanf("%d", &grade);

    printf("what is your name? ");
    scanf("%s", &name);

    //printf("%d\n", strcmp(name, "Ms.LaRose"));
    if(strcmp(name, "Mrs.LaRose") == 0){
        printf("You don't have a grade\n");
    }else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >= 80){
        printf("You have a B!\n");
    }else{
        printf("you don't have an A :(\n");
    }
    //What puts something inside of the “if” statement?
        //putting it inside curly brackets
    //How are conditions written in C?
        // line 10
    //How do we write elif conditions in C?
        //just else if, line 12
    //When do else conditions run?
        // they run if the variable doesn't match the ones in front
    //What are the 3 logical operators in C?
    /*
    < less than
    > greater than
    <= less than or equal to
    >= greater than or equal to
    == eqauls
    != not equals
    LOGICAL OPERATORS
    && and 
    || or
    ! not

    */
    return 0;

}
