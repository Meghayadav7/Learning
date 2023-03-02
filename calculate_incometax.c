#include <stdio.h> 

int main() {
    int income;
    printf("Enter your annual income \n");
    scanf("%d", &income);
    if(income >= 1000000){
        printf("Income tax paid by you to the government is 30%% \n");
    }
    else if(income >= 500000 && income < 1000000){
        printf("Income tax paid by you to the government is 20%% \n");
    }
    else if(income < 500000 && income >= 250000){
        printf("Income tax paid by you to the government is 5%% \n");
    }
    else{
        printf("Your annual income is less than 250000 that's why there no tax \n");
    }
    return 0;
}