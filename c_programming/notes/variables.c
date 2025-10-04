// KR 6th Variables Notes
#include <stdio.h>

int main(void){
    int num = 4;
    float pi = 3.14;
    //char grade = 'a';  //will only hold one letter
    char grade;
    char name[20]; //A list, can hold a bunch of characters
    //bool passing = true;

    printf("What is your letter grade?: ");
    scanf("%c", &grade);

    printf("Tell me a number: ");
    scanf("%d", &num);
    // this input lets me get a space
    printf("Tell me your name: ");
    fgets(name, sizeof(name), stdin);

    printf("%d\n", num); 
    printf("%s has a %c grade in the class!\n", name, grade); //- f stands for format

    return 0;
}

//What is the main difference between declaring variables in Python and C? -
    //in C you have to tell your coomputer what type of data will be in a variable. 
//In C, what is the purpose of specifying a data type when declaring a variable?
    //static typing (c) -> data types (for variables don't change) dynamic (python).
    // int = 4 bytes, float = 4 bytes, double = 8 bytes, char = 1 byte-STRING = list of characters
//% is the key to the computer to let it know it's a placeholder and you will place something else there. 
//List three common data types used in C and their corresponding format specifiers for printf()
    //char = c, string = s, int = d, float = f, double = if
//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    // int age = 25;
// How do you add comments in C?
    //" you can make a multi lined comment with /* and */
// use ' and ' when theres a single letter, use " and " for a string
//how do you print a newline character in C?
    // "\n" in the string
//difference between printf(() and scanf())
    //print is to print a string, scan f is the way to ask for a users input
    //scanf - need to know list 1. what kind of data it's getting 2. where to send the info
    // scan f cannot have any spaces
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    //inputs and outputs variables. 
//What is the purpose of the & symbol when using scanf() to get user input?
    //the and is adding the variable into the correct space