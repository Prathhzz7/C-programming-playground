#include<stdio.h> 

int main(){
    FILE *ptr ;
    ptr = fopen("demo.txt" , "w");
    // char x = fgetc(ptr);
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
     
    // char x= fputc('d',ptr);
    // char y= fputc('e',ptr);
    // // printf("%c",x);
    char x = fputc('a' , ptr);
    // printf("%c", fputc('d',ptr));
    printf("%c",x);

    return 0;
}