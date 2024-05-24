//Program to print the multiplication table of any number
#include<stdio.h> 

int main(){
    int n , ans , i;
    printf("Enter any number:");
    scanf("%d",&n);
    for( i  = 1 ; i<=10 ; i++){
        ans = n * i;
        printf("\n%d x %d = %d",n , i , ans);
    }
    return 0;
}