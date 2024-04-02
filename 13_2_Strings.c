#include<stdio.h> 

int main(){
    char st[50];
    printf("Enter your name:");
    scanf("%s",&st);    //Cannot be used to print multiword strings with spaces
    printf("%s",st);  //%s prints the entire string

    return 0;
}