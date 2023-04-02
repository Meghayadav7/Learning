#include <stdio.h> 

int main() {
    int i =1;
    int n = 8;
    int sum = 0;
    while(i<=10){
        printf("%d * %d = %d\n",n,i,n*i);
        sum += n*i;
        i++;
    }
    printf("The sum of %d table is %d\n",n,sum);
    return 0;
}