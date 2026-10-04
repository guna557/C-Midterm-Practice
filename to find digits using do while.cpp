#include<stdio.h>
int main() {
    int n,i=1,ld,rev=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    do {
        ld=n%10;
        n=n/10;
        rev=rev*10+ld;
    }while (n>0);
    printf("Reversed number is: %d\n",rev);
}