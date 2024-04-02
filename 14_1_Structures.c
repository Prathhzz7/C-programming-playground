#include<stdio.h> 
#include<string.h>
struct employee{
    int age;
    float salary;
    char name[20];
};
int main(){
    // Initialization of structures
    struct employee e1 ,e2,e3;
    struct employee e5 = {21,50000,"harry"};
    struct employee e6 = {0};

    e1.age = 15;
    e1.salary = 15000;
    strcpy(e1.name , "Harry");

    e2.age = 20;
    e2.salary = 20000;
    strcpy(e2.name , "Pratham");

    e3.age = 15;
    e3.salary = 27000;
    strcpy(e3.name , "PD");

    printf("\n%d",e1.age);
    printf("\n%f\n",e2.salary);
    puts(e3.name);
    printf("\n%d",e6.age);
    return 0;
}