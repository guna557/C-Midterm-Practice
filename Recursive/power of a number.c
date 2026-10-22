#include<stdio.h>
int pow(int a,int b);
int main() {
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &p);
    printf("Result: %d\n", pow(n, p));
    return 0;
}
int pow(int a,int b) {
    if (b==0) {
        return 1;
    }
    return a*pow(a,b-1);
}