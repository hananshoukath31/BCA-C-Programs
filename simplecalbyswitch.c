#include<stdio.h>
int main(){
    int choice,result;
    int num1,num2;
    printf("Enter 1st Number:");
    scanf("%d",&num1);
    printf("Enter 2nd Number:");
    scanf("%d",&num2);
    printf("\n***SIMPLE CALCULATOR***\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n\n");
    printf("Enter your choice(1/2/3/4):-\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        result=num1+num2;
        printf("Sum:%d",result);
        break;

        case 2:
        result=num1-num2;
        printf("Difference:%d",result);
        break;

        case 3:
        result=num1*num2;
        printf("Product:%d",result);
        break;

        case 4:
        if(num2==0){
            printf("Error! Can't Divide by 0");
        }
        else{
            result=num1/num2;
            printf("Sum:%d",result);
        }
        break;
        
        default:
        printf("Invalid Input");
        
    }
    return 0;
}