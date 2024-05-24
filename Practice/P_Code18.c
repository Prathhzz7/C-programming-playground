#include<stdio.h> 

typedef struct vector {
    int x;
    int y;
}vec;
int main(){
    vec v1 , v2;
    v1.x = 5;
    v1.y = 10;

    v2.x = 6;
    v2.y = 10;

    printf("Real part is %d and img part is %d",v1.x , v1.y);
    printf("\nReal part is %d and img part is %d",v2.x,v2.y);

    return 0;
}