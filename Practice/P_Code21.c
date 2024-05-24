// Write a program to generate a multiplication table in a text file
#include<stdio.h> 

int main(){
    FILE *ptr ; 
    ptr = fopen("table.txt" , "w");
    int n;
    printf("Enter the table you want to print:");
    scanf("%d",&n);
    for(int i =0 ; i<10 ;i++){
        fprintf(ptr ,"%d x %d = %d\n" ,n , i+1 , n*(i+1) );
    }

    return 0;
}