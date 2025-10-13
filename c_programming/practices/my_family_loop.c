//KZ 6th My Family Loop
#include <stdio.h>

int main(void){

    char family[6][40] = {"Aleena", "Daniel","Jackie", "Paul","Skyler","PJ"};

    for(int i=0; i < 6; i++){
        printf("Hello %s!\n", family[i]);
    }

    return 0;
}