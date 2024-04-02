#include<stdio.h> 

struct employee
{
    int code;
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    e1.code = 100;
    printf("%d",(*ptr).code);
    printf("\n%d",ptr->code);
    
    return 0;
}