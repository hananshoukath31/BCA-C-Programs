#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("Enter 1st Number:");
    scanf("%d",&num1);
    printf("Enter 2nd Number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The Sum of %d and %d is %d",num1,num2,sum);
    return 0;
}