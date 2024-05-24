// Adding a number to a pointer code
#include<stdio.h> 

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *ptr = &arr[0];
    printf("%d",arr[2]);
    ptr = ptr + 2;
    printf("%d",*ptr);
    return 0;
}