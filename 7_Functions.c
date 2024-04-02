#include<stdio.h> 

int main(){
    int a = 55;
    display(a);
    // printf("%d",a);  //Here it will print 55 only
    return 0;
}
void display(int a){
    a = 100;
    printf("%d",a);  //Here it will print 100 only
}