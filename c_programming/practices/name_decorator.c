//KR 6th Name Decorator
#include <stdio.h>
#include <strings.h>

int main(void){
    char name[30];
    char decoration[25] = "<<<";
    char decoration_two[25] = ">>>";

    printf("Hello! Welcome to the name decorator!\nWhat is your name:\n");
    scanf("%s", &name);

    strcat(decoration,name);
    strcat(decoration,decoration_two);
    printf("%s",decoration);





    return 0;
}