#include<stdio.h> 
#include<stdlib.h>
int main(){
    int *ptr ; 
    ptr = (int *) malloc( 6 * sizeof(int));
    for(int i = 0 ; i<5 ; i++){
        printf("\nEnter the value of %d element:",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i =0; i<5 ;i++){
        printf("\nThe value of %d element is %d",i+1 , ptr[i]);
    }

    //Realloc
    ptr = realloc(ptr , 10 * sizeof(int));
    for(int i = 0 ; i<10 ; i++){
        printf("\nEnter the value of %d element:",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i =0; i<10 ;i++){
        printf("\nThe value of %d element is %d",i+1 , ptr[i]);
    }
    free(ptr);
    return 0;
}