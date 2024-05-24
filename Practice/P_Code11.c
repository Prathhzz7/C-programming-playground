// Number guessing game
// If the players guess is higher then program displays Lower Number Please 
//If the guess is lower then Higher number please
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    int number , guess , nguess = 1;    // if you have to count anything or you need to calculate sum ,initialize that var with some number
    srand(time(0));
    number = rand() %100 +1;
    do{
        printf("Guess the number between 1 to 100:");
        scanf("%d",&guess);
        if(guess<number){
            printf("Higher number please");
        } 
        else if(guess>number){
            printf("Lower number please");
        }
        else{
            printf("You have guessed correctly in %d times",nguess);
        }
        nguess++;

    }while(guess!=number);

    return 0;
}
