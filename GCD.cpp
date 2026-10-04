#include <cstdio>
#include<stdio.h.>
int main() {
    int a,b,i=1,min,gcd=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    while (i<=min) {
        if (a%i==0 && b%i==0) {
            gcd=i;
        }
        i++;
    }

    printf("%d",gcd);
}
