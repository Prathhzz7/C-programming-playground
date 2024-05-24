// Sum of first n natural numbers using while loop
#include<stdio.h> 

int main(){
    int i = 1 , n = 5;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("\nSum is %d",sum);

    return 0;
}