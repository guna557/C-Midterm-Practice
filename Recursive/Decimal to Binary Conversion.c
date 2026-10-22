#include<stdio.h>
void dectobin(int n) {
    if (n==0) {
        return;
    }
    dectobin(n/2);
    printf("%d",n%2);
}
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("Binary equivalent: ");
    dectobin(n);
    return 0;
}