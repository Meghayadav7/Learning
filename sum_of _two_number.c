#include <stdio.h> 
int sum(int a, int b);

int main() {
    int a, b;
    printf("Enter any positive integer a and b: ");
    scanf("%d %d", &a,&b);
    sum(a, b);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a+b; 
    printf("The sum of a and b is %d\n",result);
    return result;
}