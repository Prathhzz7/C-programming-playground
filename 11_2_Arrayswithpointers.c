#include<stdio.h> 

int main(){
    int arr[5];
    int *ptr;
    ptr = &arr[0]; //or simply arr
    for(int i = 0 ; i < 5 ; i++){
        printf("\nEnter %d element",i+1);
        scanf("%d",ptr);  //we were writing before &marks[i] or arr[i] 
        ptr++;

    }

    for(int i = 0 ;i<5;i++){
        printf("\n%d element is %d",i+1 , arr[i]);
    }
    return 0;
}