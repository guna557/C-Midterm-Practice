#include<stdio.h>
void printnum(int n) {
    if (n==0) {
        return;
    }
    printnum(n-1);
    printf("%d ",n);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n==1)
        printf("1");
    printnum(n);
    return 0;
}