//C code to write the exponential and square root of the number
#include<stdio.h> 
#include<math.h>

int main(){
    int n = 5;
    printf("\n5 raised to power 3 is : %f",pow(5,3));
    
// Here math header file is required
// You have to write %f as format specifier only
    int x = 25;
    double result = sqrt(x);
    printf("\n%.2f",result);
    return 0;
}