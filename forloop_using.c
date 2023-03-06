#include <stdio.h> 

int main() {
    int n;
    printf("Enter n number: \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("The natural number is %d\n",i);
    }
    return 0;
}