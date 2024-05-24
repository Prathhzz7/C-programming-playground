// Write a program to find out whether a student is pass or fail
// It required total 40% and atleast 33% in each subject to pass
// Assume 3 subjects
#include<stdio.h> 

int main(){
    int physics , chemistry , maths;
    float total;
    printf("Enter the marks for physics chemistry and mathematics:");
    scanf("%d%d%d",&physics,&chemistry,&maths);
    total = (physics + chemistry+maths)/3;

    if((total < 40) || physics<33 || chemistry<33 ||maths<33){
        printf("\nYour total percentage is %f and you have fail",total);
    }
    else{
        printf("\nYour total percentage is %f and you have pass",total);
    }
    
    return 0;
}