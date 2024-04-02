// Arrays can be initialzed in three ways:
// int arr[10];
// int arr[] = {1,2,3,4,5,8,7,8,7,,6,};
// int arr[3]={1,2,3}
#include<stdio.h> 

int main(){
    int marks[5];
    for(int i = i ; i<=5 ; i++){
        printf("\nEnter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i =1 ; i<=5;i++){
        printf("\n Marks of student %d is %d",i,marks[i]);
    }
    return 0;
}