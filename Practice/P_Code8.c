//Write a program to check whether a given number is prime or not using loops
//A prime number will be divisible only by 1 and itself
#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;    //This is a dummy var
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }
    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
