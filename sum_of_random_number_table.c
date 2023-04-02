#include <stdio.h> 

int main() {
    int i =1;
    int n;
    int sum = 0;
    printf("Enter any random number\n");
    scanf("%d",&n);
    do{
        printf("%d * %d = %d\n",n,i,n*i);
        sum += n*i;
        i++;
    }while(i<=10);
    printf("The sum of %d table is %d\n",n,sum);
    return 0;
}