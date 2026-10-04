#include<stdio.h>
int main() {
    int i, j, k,n,m;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1;i <= n;i++) {
        printf("* ");
    }
    printf("\n");
    for (j = 1;j <= n-2;j++) {
        printf("* ");
        for (k=1;k<=n-2;k++) {
            printf("  ");
        }
        printf("* ");

        printf("\n");
    }
    for (m = 1;m <= n;m++) {
        printf("* ");
    }
}
