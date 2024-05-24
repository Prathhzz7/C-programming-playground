//Write a program to find the greatest number 
#include<stdio.h> 

int main(){
    int a = 5 , b = 4 , c = 9, d = 10;
    if(a>b && a>c && a>d){
        printf("Greatest is a- :%d",a);
    }
    if(b>a && b>c && b>d){
        printf("Greatest is b-:%d",c);
    }
    if(c>a && c>b && c>d){
        printf("Greatest is c-:%d",c);
    }
    if(d>b && d>c && d>a){
        printf("Greatest is d-:%d",d);
    }
    return 0;
}