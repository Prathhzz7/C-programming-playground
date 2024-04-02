#include<stdio.h> 
int sum(int a , int b);
int main(){
    int a= 5 , b = 10;
    int result  = sum(a , b);
    printf("Sum is %d",result);  //60
    
    return 0;
}

int sum(int a  , int b){
    a = 55;
    b = 5;
    int sum = a + b;
    return sum;
}