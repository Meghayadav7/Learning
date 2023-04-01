#include <stdio.h> 

int main() {
    int i = 10;
    int n;
    printf("Enter the number n\n");
    scanf("%d",&n);
    //multiplication of n in reverse order
    do{
        printf("%d * %d= %d\n",n,i,n*i);
       i--;
    }while(i>=1);
    return 0;
}