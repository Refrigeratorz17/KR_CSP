// KR 6th First Program
#include <stdio.h>

int main(void){
    char name[20]; 
    
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    

    printf("Hello, %s Welcome to your first C program!\n",name);

    return 0;
}