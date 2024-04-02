// Print even number in ascending orders from 1 to 20
//Incrementing loop
// #include<stdio.h> 

// int main(){
//     for(int i =0 ; i <=20 ; i++){
//         if(i%2 == 0){
//         printf(" %d ",i);
//         }
//     }
//     return 0;
// }

//Print odd numbers from 1 to 20 in descending order
//Decrementing loop

#include<stdio.h> 

int main(){
    for(int i = 20 ; i>=0 ; i--){
        if(i%2 == 1){
            printf(" %d ", i);
        }
    }
    
    return 0;
}