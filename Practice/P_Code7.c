//Write a program to print factorial of a number using for loop
#include<stdio.h> 
// 5 ! = 5*4*3*2*1
int main(){
    int i , factorial = 1, n;  //Initialise factorial value to 1
    printf("\nEnter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of negative numbers is not zero");
    }
    else{
        for(i = 1 ; i <=n ; i++){
        factorial *= i;   
    }
    printf("\nAns is %d",factorial);
    }
    
    
    return 0;
}