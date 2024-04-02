// Reading a file
#include<stdio.h> 

int main(){
    FILE *ptr ;
    ptr = fopen("Pratham.txt" , "r");
    // char x[2],y;
    // fscanf(ptr , "%c" , &x);
    // fscanf(ptr , "%c" , &y);
    // printf("%c",x);
    // printf("%c",y);
    // for(int i = 0 ; i<2 ; i++){
    //     fscanf(ptr , "%c" , &x[i]);
    //     printf("\n%c",x[i]);
    // }
    char z[10];
    for(int i =0 ; i<10;i++){
        fscanf(ptr , "%c" , &z[i]);
        printf("%c",z[i]);
    }
    fclose(ptr);
    

    return 0;
}