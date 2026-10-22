#include<stdio.h>
int fibonacci(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series upto %d terms:\n", n);
    for (int i=1;i<=n;i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n) {
    if (n==1) {
    return 0;
    }
    if (n==2) {
    return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}