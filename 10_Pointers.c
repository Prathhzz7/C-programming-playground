#include<stdio.h> 

int main(){
    int i =72;
    int *j;
    j = &i;
    printf("%u",&i);
    printf("\n%u",j);
    printf("\n%d",*j);
    printf("\n%d",*(&i));

    return 0;
}