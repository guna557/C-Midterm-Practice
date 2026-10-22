#include<stdio.h>
void printnum(int n) {
    if (n==0) {
        return;
    }
    printf("%d ",n);
    printnum(n-1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printnum(n);
    return 0;
}