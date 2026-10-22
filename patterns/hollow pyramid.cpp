#include <stdio.h>

int main() {
    int n, i, j, k, l;

    scanf("%d", &n);

    printf("*\n");

    for (i = 2; i <= n; i++) {

        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }

        printf("*");

        for (k = 1; k <= 2*i - 3; k++) {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    for (l = 1; l <= 2*n - 1; l++) {
        printf("*");
    }

    printf("\n");

    return 0;
}

