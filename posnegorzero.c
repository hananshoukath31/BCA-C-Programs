#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){
        printf("You Entered a Positive number");
    }
    else if(num==0){
        printf("You Entered a zero");
    }
    else{
        printf("You Entered a Negative number");
    }
    return 0;
}