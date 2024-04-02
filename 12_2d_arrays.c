#include<stdio.h> 

int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    // printf("%d",arr[0][0]);
    for(int i = 0 ;i<2;i++){
        for(int j= 0 ; j<3; j++){
            printf("\n%d",arr[i][j]);
        }
    }
    return 0;
}