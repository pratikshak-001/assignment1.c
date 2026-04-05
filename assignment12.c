#include<stdio.h>
int main(){
    int a,b,i,gcd=1,scd=-1;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);

    // to find gcd//

    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
        gcd=i;
    }
}

    // to find scd
    for(i=2;i<=a&& i<=b;i++){
        if(a%i==0 && b%i==0){
        scd=i;
        break;
        }
    }
    printf("GCD = %d\n",gcd);

    if(scd==-1){
        printf("No smallest common divisor other than 1\n");
    }
    else{
        printf("Smallest Common Divisor = %d\n",scd);}

    return 0;
}

