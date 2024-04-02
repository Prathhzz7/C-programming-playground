// Array of Structures
#include<stdio.h> 
struct employee
{   
    int code;
    
};

int main(){
    struct employee e1[100];
    e1[0].code = 100;
    e1[1].code = 50;
    printf("%d",e1[0].code);
    
    return 0;
}