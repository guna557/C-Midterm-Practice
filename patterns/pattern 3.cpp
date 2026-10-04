#include<stdio.h>
int main() {
    int n,i,j,k;
    printf("enter the number");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<i;j++) {
            printf(" ");
        }
        for (k=1;k<=n-i+1;k++) {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}

