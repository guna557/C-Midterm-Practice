#include<stdio.h>
int main() {
    int sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    do {
        sum=sum+n;
        printf("sum=%d\n",sum);
        printf("Enter a number again(PRESS 0 TO STOP): ");
        scanf("%d",&n);
    }while(n!=0);
    printf("FINAL SUM=%d\n",sum);
}