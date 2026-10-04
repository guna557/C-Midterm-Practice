#include<stdio.h>
#include<math.h>
int main() {
    int n,c=0,ld,sum=0,temp,org;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while (temp>0) {
        temp=temp/10;
        c++;
    }
    org=n;
    while (n>0) {
        ld=n%10;
        sum=sum+pow(ld,c);
        n=n/10;
    }
    if (sum==org) {
        printf("Number is an Armstrong Number");
    }
    else {
        printf("Number is not an Armstrong Number");
    }
    return 0;
}