#include <stdio.h> 

int main() {
    int i = 1;
    int n;
    printf("Enter the number n\n");
    scanf("%d",&n);
    //multiplication of n
    do{
        printf("%d * %d= %d\n",n,i,n*i);
        i++;
    }while(i<=10);
    return 0;
}