//C program to count the occurence of a given character in a string
#include<stdio.h> 
int occurence(char str[] , char c );
int main(){
    char str[50] = "Prathhzzzzz";
    int count = occurence(str , 'z');
    printf("%d",count);
    return 0;
}

int occurence(char str[] , char c){
    char *ptr = &str[0];
    int count = 0;
    while(*ptr !='\0'){
        if(*ptr == c){
            count++;
        }
        ptr++;
    }
    return count;

}