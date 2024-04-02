#include<stdio.h> 

int main(){
    int a = 4 , b = 5;
    printf("The values of a and b before swap is %d and %d",a,b);
    swap(&a,&b);
    printf("\nThe values after swapping is %d and %d",a,b);

    return 0;
}
int swap(int *p , int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}  

//Another example of call by ref
// #include<stdio.h> 

// int main(){
//     int a = 55;
//     display(&a);
//     printf("%d",a);  //Here it will print 100
//     return 0;
// }
// void display(int *a){
//     *a = 100;
    
// }