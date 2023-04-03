#include <stdio.h> 
#include <math.h>
//calculating the Area of square
int main() {
    int side;
    printf("Enter the value of side : ");
    scanf("%d",&side);
    printf("The value of area is %f", pow(side,2));
    return 0;
}