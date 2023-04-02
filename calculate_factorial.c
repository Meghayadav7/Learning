#include <stdio.h> 

int main() {
    int n,i=1;
    int fac = 1;
    printf("Enter any positive integer: ");
    scanf("%d",&n);
    while(i<=n){
         fac *= i;
         i++;
    }
    printf("The factorial of %d = %d",n,fac);
    return 0;
}