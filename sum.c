#include <stdio.h> 
int sum(int a, int b);

int main() {
    sum(21,14);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a+b;
    printf("sum of a and b is %d\n",result);
    return result;
}