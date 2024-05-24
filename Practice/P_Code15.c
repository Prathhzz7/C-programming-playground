//Write a program using functions which counts the number of positive integers in an array
#include<stdio.h> 
int count_array(int arr[] , int n){
    int count = 0;
    for(int i = 0 ; i<n;i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]= {-7,4,5,-3,1,2,-1,-4};
    int size  = sizeof(arr) / sizeof(arr[0]);
    int count = count_array(arr,size);
    printf("%d",count);
    return 0;
}