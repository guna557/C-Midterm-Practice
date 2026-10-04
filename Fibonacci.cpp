// Created by DELL on 02-10-2026.
//Fibonacci Sequence
#include<stdio.h>
int main() {
    int n1=0,n2=1,sum=0,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    for (i=0;i<=n;i++) {
        sum=n1+n2;
        n1=n2;
        n2=sum;
        printf("%d ",sum);
    }
    return 0;
}
