//Write a program for reversing an array in C
#include<stdio.h> 

void reversearray(int arr[] , int n){
    int temp;
    for(int i = 0 ; i<(n / 2) ; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",size);
    for(int i = 0 ; i<size;i++){
        printf(" %d ",arr[i]);
    }
    reversearray(arr ,size);
    printf("\nReversed array is:\n");
    for(int i = 0 ; i<size ; i++){
        printf(" %d ",arr[i]);
    }

    return 0;
}



// #include <stdio.h>

// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     int temp;

//     while (start < end) {
//         // Swap elements at start and end positions
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
        
//         // Move start pointer forward and end pointer backward
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     reverseArray(arr, size);
    
//     printf("\nReversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }
