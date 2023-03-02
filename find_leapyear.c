#include <stdio.h> 

int main() {
    int year;
    printf("Enter year \n");
    scanf("%d", &year);
    //finding leap year
    if(year % 4 == 0){
        printf("This given year is leap year \n");
    }
    else{
        printf("this is not leap year");
    }
    return 0;
}