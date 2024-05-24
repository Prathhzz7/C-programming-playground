//Reading all the characters from the file
#include<stdio.h> 

int main(){
    FILE *ptr ; 
    ptr = fopen("demo.txt" , "r");
    // char c;
    // c = fgetc(ptr);
    // while(c!=EOF){
    //     printf("%c",c);
    //     c = fgetc(ptr);
    // }

    // 2nd method
    char x;
    while(1){
        x = fgetc(ptr);
        if(x == EOF){
            break;
        }
        printf("%c",x);
    }   
    fclose(ptr);
    return 0;
}