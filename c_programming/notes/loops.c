//KR 6th Loops and arrays in C
#include <stdio.h>

int main(void){
    int nums[] = {4,684,1,64,2,8,14,36,456,15};
    char candy[5][20] = {"Skittles", "Butterfinger","Reese's", "Twix","KitKat"};
    
    for(int x = 0; x < 10; x++){
        printf("%d\n", nums[x]);
    }

    for(int i=0; i < 5; i++){
        printf("%s is my favorite candy!\n", candy[i]);
    }
    
    for(int num = 1; num < 11; num++){// start,stop,increase
        printf("%d\n",num);
    }

    int goose = 6;
    int count = 0;
    while(count != goose){
        printf("Duck\n");
        count++;
    }
    printf("Goose!");
    


    return 0;

}

//What is a loop?
    //something that repeats
//What are the two types of loops?
    //while loop and for loop
//What is iteration
    //how many times it repeats
//What are arrays? 
    //What we call in Python, a LIST. It is a collection of data that we clump together
//How do you make lists in C? 
    //set data type, give how many in list, curly brackets, commas between each item. EX=line 5
//How do you make for loops in C? 
    //set data type and incrementer first.
//How do you make while loops in C?
    //basically the same in python, line 22