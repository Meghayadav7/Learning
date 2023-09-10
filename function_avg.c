#include <stdio.h> 
int avg(int a, int b, int c);

int main() {
    int r;
    r = avg(24, 6, 9);
    printf("Average of given 3 number is %d\n", r);
    return 0;
}

int avg(int a, int b, int c){
    int result;
    result = (a + b + c) / 3;
    return result;
}