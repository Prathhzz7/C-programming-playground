//Write  a program using recursion to calculate the nth element of fibonacci series
// HINT Fib(n) = Fib(n-1) + Fib(n-2)
#include<stdio.h> 

int main(){
    int number;
    printf("Enter the value of the nth element:");
    scanf("%d",&number);
    int result = fibonacci(number);
    printf("%d",result);
    return 0;
}

int fibonacci(int n){
    if(n<=0){
        return "Invalid input";
    }
    else if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}