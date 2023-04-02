#include <stdio.h> 

int main() {
    int sum = 0;
    int n;
    printf("Enter any random number\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        printf("n * i = %d\n",n*i);
        sum += n*i;
    }
    printf("The sum of %d table is %d",n,sum);
    return 0;
}