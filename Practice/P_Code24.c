//Stone paper game in C
#include<stdio.h> 

int game(char you , char comp){
    if(you == comp) {
        return 0;
    }
    else if(you == 's' && comp == 'p'){
        return -1;
    }
    else if(you == 's' && comp == 'c'){
        return 1;
    }
    else if(you == 'c' && comp == 'p'){
        return 1;
    }
    else if(you == 'c' && comp == 's'){
        return -1;
    }
    else if(you == 'p' && comp == 's'){
        return 1;
    }
    else if(you == 'p' && comp == 'c'){
        return -1;
    }
    return 0; // This is to handle the case if none of the conditions above match
}

int main(){
    char c, you;
    printf("1. Stone - s\n2. Paper - p\n3. Scissor -s\n4. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c", &you); 
    char comp = 's'; 
    int result = game(you , comp);
    if(result == 1){
        printf("\nYou won\n");
    }
    else if(result == -1){
        printf("\nYou lose\n");
    }
    else if(result == 0){
        printf("\nDraw\n");
    }
    return 0;
}
