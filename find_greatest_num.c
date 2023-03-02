#include <stdio.h> 

int main() {
    int num1,num2,num3,num4,num5;
    printf("Enter four number: ");
    scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
    int greatest = num1;
    if(num2 > greatest){
        greatest = num2;
    }
    if(num3 > greatest){
        greatest = num3;
    }
    if(num4 > greatest){
        greatest = num4;
    }
    if(num5 > greatest){
        greatest = num5;
    }
    printf("the greatest number is: %d\n", greatest);
    return 0;
}