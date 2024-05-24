//Write a program to find the greatest number in an array
#include<stdio.h> 

int largest_number(int arr[], int n) {
    int i;
    int max = arr[0];     // Assume the first element as max

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max; // Return the maximum value
}

int main() {
    int arr[10], n = 10;
    printf("Enter 10 numbers:");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int result = largest_number(arr, n);
    printf("\nResult is %d", result);

    return 0;
}
