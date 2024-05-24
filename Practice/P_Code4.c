// Write a C program to check whether the character entered is lowercase or uppercase
#include<stdio.h> 

int main(){
    char x;
    printf("Enter a char:");
    scanf("%c",&x);
    if(x>=97 && x<123){
        printf("\nIt is lowercase");
    }
    else{
        printf("\nIt is uppercase");
    }
    return 0;
}

// Capital A starts with 65
