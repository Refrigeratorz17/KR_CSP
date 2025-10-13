//KR 6th fizzbuzz
#include <stdio.h>

int main(void){
    int number=1;

    while(number < 51){
        if(number % 3 == 0 && number % 5 == 0){
            printf("FizzBuzz\n");
        }else if(number % 5 == 0){
            printf("Buzz\n");
        }else if(number % 3 == 0){
            printf("Fizz\n");
        }else{
            printf("%d\n",number);
        }
            number++;
        }
    return 0;
}