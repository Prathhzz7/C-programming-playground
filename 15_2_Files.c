// Writing to a file
#include<stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("Pratham.txt" , "w");
    // int num = 7;
    // fprintf(ptr , "%d" , num);
    
    // Want to write the whole contact 
    int num[10] = {8,3,6,9,1,2,4,6,0,9};
    for(int j = 0 ; j<10 ; j++){
        fprintf(ptr , "%d" , num[j]);
    }
    fclose(ptr);
    return 0;
}