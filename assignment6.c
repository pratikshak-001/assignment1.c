#include<stdio.h>
int main(){
    int i,n;
    long fact = 1;
    printf("enter the num:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of %d = %ld",n,fact);
    return 0;
}