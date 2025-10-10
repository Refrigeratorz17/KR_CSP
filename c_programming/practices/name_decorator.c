//KR 6th Name Decorator
#include <stdio.h>
#include <strings.h>

int main(void){
    char decoration[25] = "<~^";
    char name[35];
    char decorationS[25] = "^~>";

    printf("Hello welcome to name decorator!\n");
    printf("Please enter your name: \n");
    scanf("%s", name);
    
    strcat(decoration,name);
    
    printf("%s", name);



    return 0;
}