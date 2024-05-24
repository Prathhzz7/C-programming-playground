//Write a structure representing a complex number

#include<stdio.h> 

typedef struct complex{
    int real;
    int complex;
}comp;

int main(){
    comp c[5];
    for(int i =0 ; i<5;i++){
        printf("Enter the real value for complex number %d: ",i+1);
        scanf("%d",&c[i].real);

        printf("Enter the complex value complex number %d: ",i+1);
        scanf("%d",&c[i].complex);
    }

    for(int i=0 ; i<5 ; i++){
        printf("\nComplex number is %d + j%d" , c[i].real , c[i].complex);
    }

    return 0;
}