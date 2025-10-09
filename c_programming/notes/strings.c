//KR 6th Strings notes
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100] = "Xavier"; //set charcter type to CHAR. need to include BRACKETS
    char last_name[25]; 
    char full_name[100];

    name[2] = 'j';
    printf("Please tell me your last name: \n");
    scanf("%s", last_name);

    printf("[%s]\n", name);

    strcat(full_name, name);
    printf("[%s]\n", full_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    strcmp(last_name, "LaRose"); // returns 0 if equal

    printf("%zu\n", strlen(full_name)); //how large the string is
    printf("%zu\n", sizeof(full_name)); //How large the string could be



     // the character limit cannot be increased once chosen during running, save the correct amount of space
    

    //What is the difference between a string and a character?
        //a string is a LIST of characters.
    //What types of quotation marks do we need for a string?
        // double quotes because single quotes are used for when we only have one letter
    //What library do we need to include to access the string functions in C?
        //<stdio.h>
    //List functions the library allows us to use.
        //strings!!
    //How do we concatenate strings in C?
        // strcat() EX. line 17. ONLY ALLOWS TWO STRINGS TO BE ADDED
    //How do we get individual characters from a string in C?
        // EX line 11

    return 0;
}