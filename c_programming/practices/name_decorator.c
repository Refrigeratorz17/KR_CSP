//KR 6th Name Decorator
#include <stdio.h>
#include <strings.h>

int main(void){
    char decoration[100] = "<~^";
    char name[25];
    char decorationS[100] = "^~>";

    printf("Hello welcome to name decorator!\n");
    printf("Please enter your name: \n");
    scanf("%s", name);
    
    strcat(decoration,name);
    
    printf("%s", name);



    return 0;
}