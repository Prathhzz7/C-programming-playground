#include<stdio.h> 
#include<string.h>
int main(){
    char st[] = {'m','a','t','\0'} , p[10];
    char first[10] = "p";
    char second[10] = "d";
    printf("%s",st);
    // Length of the string
    printf("\n%d",strlen(st));
    //Copying the string
    strcpy(p,st);
    printf("\n%s",p);
    //Concatenate two strings
    strcat(first , second);
    printf("\n%s",first);
    //Comparing two strings
    printf("\n%d",strcmp(p,st));

    return 0;
}