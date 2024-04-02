#include<stdio.h> 

int main(){
    int i = 5;
    // i  = i++;
    // printf("%d",i++);  5
    // i = ++i;
    // printf("%d",++i);   //6
    // i = i + i++;
    // printf("%d",i); //11
    // i = i+ ++i;
    // printf("%d",i); //12

    // i = 1 + i++;
    // printf("%d",i); //6
    i = 1 + ++i;
    printf("%d",i);
    
    return 0;
}