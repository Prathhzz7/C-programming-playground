#include<stdio.h> 
#include<string.h>
int main(){
    char s[] = {'P' , 'R' , 'A' ,'T' ,'H','A','M' , '\0'};  //null character is compulsary to write
            //or
    char p[] = "harry";

    for(int i = 0 ; i<strlen(s);i++){
        printf(" %c ",s[i]);
    }
    return 0;
}   