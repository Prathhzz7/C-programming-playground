#include<stdio.h> 

int main(){
    printf("Factorial of 5 is %d",factorial(5));
    return 0;
}
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}
#include<stdio.h> 

// int main(){
//     printf("Factorial of 5 is %d",factorial(5));
//     return 0;
// }
// int factorial(int x){
//     int ans;
//     if(x==0 || x==1){
//         ans = 1;
//         return ans;
//     }
//     else{
//         ans =  x * factorial(x-1);
//         return ans;
//     }
//     printf("Ans is %d",ans);
// }