#include<stdio.h> 
#include<stdlib.h>

int main(){
    float *ptr ;
    ptr = (float *) malloc (5 * sizeof(float));
    for(int i =0 ; i<5;i++){
        printf("\nEnter the value of %d element:",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i =0; i<5 ;i++){
        printf("\nThe value of %d element is %f",i+1 , ptr[i]);
    }

    free(ptr);
    return 0;
}