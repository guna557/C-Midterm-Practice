#include<stdio.h>
int sumn(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, sumn(n));
    return 0;
}
int sumn(int n) {
    if (n==0) {
        return 0;
    }
    return n+sumn(n-1);
}

