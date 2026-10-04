#include<stdio.h>
int main() {
    int n,i,j,k;
    printf("ENTER THE N OF THE PATTERN\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for (j=1;j<=i-1;j++) {
            printf(" ");
        }
        for (k=5;k>=i;k--) {
            printf("* ");
        }
        printf("\n");
    }
}
