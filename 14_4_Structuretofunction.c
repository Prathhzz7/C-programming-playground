#include<stdio.h> 

struct employee {
    int code;
    float salary;
};
void show(struct employee emp){
    printf("\nThe value of code is %d",emp.code);
    printf("\nThe salary is %.2f",emp.salary);
}

int main(){
    struct employee e1 = {100 , 50000};
    show(e1);
    return 0;
}
