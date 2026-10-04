#include<stdio.h>
int main() {
    int n,i,j,k;
    printf("enter the number");
    scanf("%d",&n);
    for (i=1;i<=n-i;i++) {
        for (j=1;j<n;j++) {
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++) {
            printf("* ",k);
        }
        printf("\n");
    }
    return 0;
}