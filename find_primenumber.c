#include <stdio.h> 

int main() {
    int n;
    int i = 2;
    int prime = 1;
    printf("Enter any positive integer: ");
    scanf("%d",&n);

    while(i<=n/2){
         if(n % i == 0){
            prime = 0;
            break;
         }
         i++;
    }
    if(prime == 1 && n>1){
        printf("%d is prime number\n",n);
    }else{
        printf("%d is not a prime number\n",n);
    }
    return 0;
}