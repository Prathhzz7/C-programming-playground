// Write a program to check whether a given character is present in as string or not
#include<stdio.h> 
void occurence(char str[] , char c);
int main(){
    char str[100],c;
    printf("Enter a string:");
    gets(str);
    printf("\nYour string is:");
    puts(str);
    printf("Enter any character:");
    scanf("%c",&c);
    occurence(str ,c);
    return 0;
}

void occurence(char str[] , char c){
    char *ptr = &str[0];
    int flag = 0;
    while(*ptr != '\0'){
        if(*ptr == c){
            flag = 1;
            break;
        }
        ptr ++;
    }
    if(flag ==1){
        printf("It is present");
    }
    else{
        printf("It is not present");
    }
}