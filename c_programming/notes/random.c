//KR 6th Random 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    char letters[5] = {'a','b','c','d','e'};
    srand(time(NULL));
    for(int i=0; i <10; i++);
    int num = rand() %5;
    printf("%c\n",letters[num]);

    return 0;
}