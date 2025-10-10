//KR 6th Silly Sentances
#include <stdio.h>

int main(void){
    char word_one[25];
    char word_two[25];
    char word_three[25];
    printf("Hello! Welcome to silly sentances, to start please enter in an emotion:\n");
    scanf("%s", word_one);
    printf("Give me a singular object or animal:\n");
    scanf("%s", word_two);
    printf("give me an adjective:\n");
    scanf("%s", word_three);

    printf("I woke up feeling %s, the sun was shining through my window\n", word_one);
    printf("All of a sudden, a %s flew and crashed through my window!\n", word_two);
    printf("I picked it up, it was %s so i threw it back out the already shattered window\n", word_three);
}