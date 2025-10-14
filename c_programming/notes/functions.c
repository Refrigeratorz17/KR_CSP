//KR 6th Function Notes
#include <stdio.h>

void birthday(char*name, int age){
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to you\n");
    printf("Happy Birthday dear %s\n",name);
    printf("Happy Birthday to you\n");
    printf("Happy Birthday %s is now %d\n",name,age);
}

int add(int num_one, int num_two){
    return num_one + num_two;
}

char* get_name(void){
    char *name;
    printf("What is your name: ");
    scanf("%s",name);
    return name;
}

float get_num(void){
    float num;
    printf("Tell me a number: ");
    scanf("%f", &num);
    return num;
}

int main(void){
   birthday("Mykel",15);
   birthday("Lucas",40);
   birthday("Victoria",19);
   char* user = get_name();
   birthday(user,5);
   int addition = add(5,4);
   printf("%d\n",addition);
   printf("%d\n", add(50,37));
   float our_number = get_num();
   printf("%f\n",our_number);

    return 0;
}

//What a function is
    //A function is like a variable, but it holds an action. 
//Why we use functions
    //To make repetative things shorter and easier to code.
//How to write a function in C
    //give it the void data type- void means no return, and no parameters, curly brackets, call=python
//What are arguments and parameters?
    //parameters are the thing inside the parentheses,a variable inside the function, star means all characters not just one
        //Arguments are when you call it down in main
//How do arguments and parameters work together?
    //You label a parameter so that it fits inside the function, the argument is then labeled down below telling the code what it is
//How to use parameters and arguments in C
    //You write the data type, if a character use *, then when calling, choose what the parameter is
//What are return statements?
    //replaces it with what the function is doing, nothing happens, it's as if you wrote the number nine
//How do return statements change how you define a function in C?
    //you can reference the info over and over again and place it where you want
//What do return statements do with the information?
    //They replace the call with the information