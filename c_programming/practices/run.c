#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


char guess(char*wordss,char*print){
    char user_input[50];
    char guessed_letters[50][50];
    
    printf("%s",print);
    scanf("%s",&user_input);
    return user_input
    if(strcmp(user_input,"") == 0){
        printf("please enter a valid letter!");
        return 0;
    // }else if(strcmp(user_input) == 0){
        //printf("You already guessed that letter!");
        //return 0;
    }else if(strcmp(user_input,wordss) == 0){
        printf("Hooray you guessed the word! rerun the code to play again!");
        return 0;    
    }else if(strlen(user_input) > 1){
        printf("incorrect, guess only one letter");
        return 0;
    }else{
        printf("BRUh");
    }
    if(strcmp(user_input,wordss) == 0){
        printf("correct!");
        return 0;
     }else{
        printf("incorrect, guess again");
        return 1;
    }
}

int main(void){
    char words[49][245] = {"ocean","water","white","ducky","kayze","early","smoke","train", "layer","alone","brain","craft","paint","flute","beach","heart","human","image","lemon","lucky","mouse","metal","noise","plane","phone","power","quiet","ready","store","sport","storm","today","table","under","video","watch","young", "slate", "crane", "brick", "slate", "stare", "raise", "arise", "farts", "bread",}; 
    srand(time(NULL));
    for(int i=0; i<10; i++);
    char word = rand()%49;
    scanf("%s",word);
    guess(words[word]);

}